#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
void swap(int arr[], int s , int e){
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
}
void wawe_sort(int arr[] ,int s , int n ){
    if(s<n){
        return;
    }
    if(arr[s-1]>arr[s]){
        swap(arr,s-1 , s);
    }
    if(arr[s]<arr[s+1] && s<=n-2){
        swap(arr, s,s+1);
    }
    wawe_sort(arr , s+2 , n);
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int arr[] ={1,3,4,7,5,6,2};
    wawe_sort(arr , 1 , 6);
    for(int i = 0 ; i<8 ; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}