#include <bits/stdc++.h>
#define int long long int
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i , a , b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;

bool comparator(pii&a , pii &b){
    return a.second<b.second;
}

signed main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif


    int n ;
    cin>>n ;
    vector<pair<int , int>>arr;
    for(int i = 0 ; i<n ; i++){
        int a , b;
        cin>>a>>b;
        arr.push_back({a,b});
    }

    sort(arr.begin() , arr.end() ,[&](pii &a , pii &b ){
        return a.ss < b.ss;
    } );
    // rep(i ,0 , n){
    //     cout<<arr[i].ff <<" "<<arr[i].ss<<endl;
    // }
    int take =1 ;
    int end = arr[0].second;
    for(int i = 1; i<n ; i++ ){
        if(arr[i].ff>=end){
            take++;
            end=arr[i].second;
        }
    }
    cout<<take<<endl;
    return 0;
}