#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i , a , b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;
void merge(int *arr , int s , int mid , int e ){
    int n1 = mid+1 - s ;
    int n2 = e - mid ;
    vi a1(n1) ;
    vi a2(n2) ;
    for(int i = 0 ; i<n1 ; i++){
        a1[i] = arr[s+i];
    }
    for(int i = 0 ; i<n2 ; i++){
        a2[i] = arr[mid+1+i];
    }
    int i =0 , j = 0 ,k =s;
    while(i<n1 and j<n2){
        if(a1[i]<a2[j])
            arr[k++] = a1[i++];
        else {
            arr[k++] = a2[j++]; 
        }
    }

    while(i<n1 ){
        arr[k++]=a1[i++];
    }
    while(j<n2){
        arr[k++] = a2[j++];
    }


 
}

void merge_sort(int *arr ,int n , int s , int e ){
    if(s<e){
        int mid = (s+e)/2 ;
        merge_sort(arr ,n , s , mid);
        merge_sort(arr ,n , mid+1 , e);
        merge(arr ,s , mid ,e);

    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    merge_sort(arr , n , 0 ,n);

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}