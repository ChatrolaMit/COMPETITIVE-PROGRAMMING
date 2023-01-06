#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
void swa(int arr[] , int s , int n){
    int temp = arr[s];
    arr[s] = arr[n];
    arr[n] = temp;
}
void dnf_sort(int arr[] , int n){
    // cout<<"*";
    int s = 0 , mid = 0 , e = n-1;
    while(mid<=e){
        // cout<<"*";
        if(arr[mid]==0){
            swa(arr , mid , s);
            mid++;
            s++;
        }
        if(arr[mid]==2){
            swa(arr, mid, e);
            
            e--;
        }
        if(arr[mid]==1){
            mid++;
        }
    } 
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int arr[] = {2,1,2,2,1,0,0,1};
    // cout<<"*";
    dnf_sort(arr , n);
    // cout<<"*";
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}