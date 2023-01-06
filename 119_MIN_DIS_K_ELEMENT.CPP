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

// bool is_fizible(int mid , int arr[] , int n , int k ){
//     int pos=arr[0];
//     int ele = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]-pos>=mid){
//             pos=arr[i];
//             ele+=1;
//             if(ele==k){
//                 return true;
//             }
            
//         }
        
//     }
//     return false;

// }

// int largest_min_distance(int arr[] , int n ,int k ){
//     sort(arr , arr+n);
//     int result = -1 ;
//     int left = 1 , right = arr[n-1];

//     while(left<right){
//         int mid = (left+right)/2;
//         if(is_fizible(mid ,arr , n , k)){
//             result = max(result , mid);
//             left = mid+1;
//         }
//         else{
//             right=mid;
//         }
//     }

//     return result;


// }

// int main()
// {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     freopen("error.txt", "w", stderr);
// #endif

//     int arr []= {11,2,7,5,1,12};
//     cout<<largest_min_distance(arr,6,3);


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

bool is_fizible(int arr[] , int n , int k , int mid){
    int pos = arr[0]; 
    int element = 1;
    for(int i = 0 ; i<n ; i++){
        if(arr[i]-pos >=mid){
            element++;
            pos = arr[i];
            if(element>=k){
                return true;
            }
        }
    }
    return false;
}

int largest_min_dis(int arr[] , int n, int k){
    
    int ans = -1;
    sort(arr , arr+n);
    int start = 1  , end = arr[n-1];
    while(start<end){
        int mid = (start+end)/2;
        if(is_fizible(arr,n,k,mid)){
            ans = max(ans , mid);
            start = mid+1;
        }
        else{
            end = mid;
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

    int arr []= {11,2,7,5,1,12};
    cout<<largest_min_dis(arr,6,3);


    return 0;
}