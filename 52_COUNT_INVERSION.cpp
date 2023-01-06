#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

int merge(int arr[] , int s , int mid , int e){
    int n1 = mid-s+1 ,inv=0;
    int n2 = e-mid ;
    int a[n1];
    int b[n2];
    for(int i = 0 ; i<n1 ; i++){
        a[i] =arr[i+s]; 
    }
    for(int j = 0 ; j<n2 ; j++){
        b[j] = arr[j+mid+1];
    }
    int i = 0 , j = 0 , k =s ;
    while(i<n1 && j<n2 ){
        if(a[i]<b[j]){
            arr[k] = a[i];
            k++ ;
            i++ ;
        }
        else{
            arr[k] = b[j];
            inv+=n1-i;
            j++;
            k++; 
        }
    }
    while(i<n1){
        arr[k]= a[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k]= b[j];
        k++;
        j++;
    }
    return inv;
}

int merge_sort(int arr[] , int s , int e){
    int inv=0;
    if(s<e){
        int mid = (s+e)/2;
        inv+=merge_sort(arr , s , mid);
        inv+=merge_sort(arr , mid+1 , e);
        inv+=merge(arr , s , mid , e);
    }
    return inv;

}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<merge_sort(arr , 0 , n-1);
    // for(int i = 0 ; i<n ; i++){
    //     cout<<arr[i]<<" ";
    // }
    
    return 0;
}