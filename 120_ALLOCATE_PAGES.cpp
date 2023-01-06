// #include <iostream>
// #include <string>
// #include <vector>
// #include <stack>
// #include <deque>
// #include <set>
// #include <algorithm>
// #include <climits>

// #define ll long long
// using namespace std;

// bool ispossible(int arr[] , int n , int m , int min){

//     int std_required = 1; 
//     int sum = 0;

//     for(int i = 0 ; i<n ; i++){
//         if(arr[i]>min){
//             return false;
//         }
//         if(sum+arr[i]>min){
//             std_required++;
//             sum = arr[i];
//             if(std_required>m){
//                 return false;
//             }
//         }
//         else{
//             sum+=arr[i];
//         }
//     }
//     return true;

// }

// int allocate_min(int arr[], int n , int m ){
//     if(n<m){
//         return -1;
//     }
//     int sum = 0;

//     for(int i = 0 ; i<n ; i++ ){
//         sum +=arr[i];
//     }
//     int start = 0 , end = sum , ans = INT_MAX;

//     while(start<=end){
//         int mid = (start+end)/2;
//         if(ispossible(arr , n , m , mid)){
//             ans = min(ans, mid);
//             end = mid-1;
//         }
//         else{
//             start = mid+1;
//         }
//     }
//     return ans;



// }

// int main()
// {

//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//         freopen("error.txt", "w", stderr);
//     #endif

//     int arr[] = {12 , 34 , 67 , 90};

//     int m = 4 , n = 2;
//     cout<<allocate_min(arr , m , n );
    

//     return 0;
// }


#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <deque>
#include <set>
#include <algorithm>
#include <climits>

#define ll long long
using namespace std;

bool is_phisible(int arr[] , int m , int n , int mid){

    int sum = 0;
    int student =1;
    for(int i = 0 ; i<m ; i++){
        if(arr[i]>mid){
            return false;
        }
        if(arr[i]+sum >mid){
            student++;
            sum = arr[i];
            if(student>n){
                return false;
            }
        }
        else{
            sum+=arr[i];
        }
        
    }
    return true;

}

int allocate_min(int arr[] , int m , int n){
    int start = 0;
    int end = 0;int ans = INT32_MAX;
    for(int i = 0 ; i<m ; i++){
        end+=arr[i];
    }
    
    while(start<end){
        int mid = (start+end)/2;
        if(is_phisible( arr , m , n ,mid )){
            ans = min(ans , mid);
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;

}
int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    int arr[] = {12 , 34 , 67 , 90};

    int m = 4 , n = 2;
    cout<<allocate_min(arr , m , n );
    

    return 0;
}

