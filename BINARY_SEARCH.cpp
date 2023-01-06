#include <iostream>
using namespace std;

int linear_search(int *arr ,int n , int key){
    int ind = 0 ;
    for(int i = 0 ; i< n ; i++){
        if (arr[i]==key) {
            return i;
            // break ;
        }
    }
    return -1;
}

int binary_search(int *arr ,int s , int e ,int key){
    if (s<=e){
        int mid = (s+e)/2 ;
        if(arr[mid]>key) return binary_search(arr , s ,mid-1 , key );
        else if(arr[mid]<key) return binary_search(arr, mid+1 , e , key);
        else return mid;
    }
    else return s ;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n] ;
    for(int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }
    int i = binary_search(arr , 0,n , 13 );
    cout<<i<<endl;
    


    
    return 0;
}
