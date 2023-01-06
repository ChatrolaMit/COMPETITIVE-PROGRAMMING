#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

void merge(int arr[] , int s , int mid , int e){
    int n1 = mid+1-s;
    int n2 = e-mid;
    int start[n1];
    int end[n2];
    for(int i = 0 ; i<n1; i++){
        start[i] =arr[i+s]; 
    }  
    for(int i = 0 ; i<n2 ; i++){
        end[i] = arr[i+mid+1];
    }
    int i= 0 , j = 0 , k = s ;
    while( i<n1 && j<n2){
        if(start[i]>end[j]){
            arr[k] = end[j];
            k++;
            j++;
        }
        else{
            arr[k] = start[i];
            k++;
            i++;
        }
    }
    while(i<n1){
        arr[k] = start[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = end[j];
        j++;
        k++;
    }

}

void merge_sort(int arr[] , int s , int e){
    if(s<e){
    // cout<<"*";
    int mid = (s+e)/2;
    merge_sort(arr , s , mid );
    merge_sort(arr , mid+1 , e);
    merge(arr , s , mid , e);
    
    }
}


int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    merge_sort(arr , 0 , n);
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }
    

    
    return 0;
}