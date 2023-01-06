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

int find_peak_element(int arr[] , int low , int high , int n){
    int mid = low+(high-low)/2;
    if((mid==0 || arr[mid-1]<=arr[mid] )&& (mid == n-1 || arr[mid]>=arr[mid+1])){
        return mid;
    }
    else if(mid>0 and arr[mid-1]>arr[mid]){
        return find_peak_element(arr , low , mid-1 ,n);
    }
    else{
        return find_peak_element(arr , mid+1 , high , n);
    }

}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    int arr[] = {0,1,-1,1,1,-1,1};
    int n = 7;
    cout<<find_peak_element(arr , 0 , n-1 ,n);



    return 0;
}