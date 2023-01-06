#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i , a , b) for(int i=a ; i<b ; i++)
#define ff first
#define map_it(it) map<int , int > :: iterator it;
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    int n ;
    cin>>n ;
    vi arr(n);
    for(auto &a : arr){
        cin>>a;
    }

    map<int , int , greater<int>>mp ;
    rep(i , 0 , n){
        mp[arr[i]]++;
    }

    map_it(it);
    // rep(it  , it!=mp.end() ,)
    for(it= mp.begin() ; it!= mp.end() ; it++){
        cout<<it->first <<" "<<it->second ;
    }

    

    
    return 0;
}