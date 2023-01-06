#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <stack>
#include <deque>
#include <set>
#include <algorithm>
#include <climits>

#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i , a , b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;
void heapify(vector<int> &arr , int i , int n){
    int maxind = i;
    int left = 2*i+1 ;
    int right = 2*i+2;
    if(left<n and arr[left]>arr[maxind])
        maxind = left;
    if(right<n and arr[right]>arr[maxind])
        maxind = right;

    if(maxind !=i){
        swap(arr[i] , arr[maxind]);
        heapify(arr , maxind , n );
    }
}
void heap_sort(vector<int>&arr){
    int n =arr.size();
    for(int i = n/2-1 ; i>=0 ; i--){
        heapify(arr, i, n);
    }
    for(int i = n-1 ; i>0 ; i--){
        swap(arr[i] , arr[0]);
        heapify(arr , 0 , i );

    }
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif


    int n;
    cin>>n;
    vi a(n);
    rep(i , 0 , n){
        cin>>a[i];
    }
    heap_sort(a );
    for(int i = 0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}



// #include <iostream>
// #include <bits/stdc++.h>
// #include <string>
// #include <vector>
// #include <stack>
// #include <deque>
// #include <set>
// #include <algorithm>
// #include <climits>

// #define ll long long
// #define vi vector<int>
// #define pii pair<int,int>
// #define vii vector<pii>
// #define rep(i , a , b) for(int i=a ; i<b ; i++)
// #define ff first
// #define ss second
// #define setBits(x) builtin_popcount(x)
// using namespace std;

// void heapyfy(vi &a , int n , int i){
    
//     int maxind = i;
//     int l = 2*i+1 ;
//     int r = 2*i+2 ;

//     if(l<n and a[l]>a[maxind]){
//         maxind = l;
//     }
//     if(r<n and a[r]>a[maxind]){
//         maxind = r;
//     }
//     if(maxind!=i){
//         swap(a[i] , a[maxind]);
//         heapyfy(a,n,maxind);
//     }

// }

// void heap_sort(vi &a){
//     int n =a.size();

//     for(int i = n/2-1 ; i>=0 ; i--){
//        heapyfy(a,n,i);
//     }
//     for(int i = n-1 ; i>0 ; i--){
//         swap(a[0] , a[i]);
//         heapyfy(a , i , 0);
//     }
// }
// int main()
// {
//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//         freopen("error.txt", "w", stderr);
//     #endif


//     int n;
//     cin>>n;
//     vi a(n);
//     rep(i , 0 , n){
//         cin>>a[i];
//     }
//     heap_sort(a);
//     for(int i = 0 ; i<n ; i++){
//         cout<<a[i]<<" ";
//     }
    
//     return 0;
// }

