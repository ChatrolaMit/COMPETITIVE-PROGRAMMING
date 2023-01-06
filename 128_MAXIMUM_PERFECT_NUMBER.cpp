#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <deque>
#include <set>
#include <cmath>
#include <algorithm>
#include <climits>
#define ll long long
using namespace std;

bool is_number_perfect(int n){
    int sum = 1;
    for(int i = 2 ; i<sqrt(n) ; i++){
        if(n%i==0){
            if(i==n/i){
                sum+=i;
            }
            else{
                sum+=i+n/i;
            }
        }
    }
    if(sum==n and n!=1 ){
        return true;
    }
    return false;
}

int max_num_perfects(int arr[] , int n , int k ){
    for(int i = 0 ; i<n ; i++){
        if(is_number_perfect(arr[i])){
            arr[i]=1;
        }
        else{
            arr[i] = 0;
        }
    }

    int ans = 0 , sum = 0 , start = 0;
    for(int i = 0 ; i<=k-1 ; i++){
        sum+=arr[i];
    }
    ans = max(ans , sum);
    for(int i = k ; i<n ; i++){
        ans = max(ans ,sum+arr[i]-arr[start]);
        start+=1;
    }
    // cout<<"*";
    return ans;

}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    int arr[] = {28 , 2,3,6,496,99,8128,24};
    cout<<max_num_perfects(arr ,8,4 );
    


    return 0;
}