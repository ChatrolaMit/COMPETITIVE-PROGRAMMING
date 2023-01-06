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
#define pb(x) push_back(x)
#define rep(i , a , b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        // freopen("error.txt", "w", stderr);
    #endif
    
    // int k;
    // cin>>k;
    // vector<vector<int>>a(k);

    // for(int i = 0 ; i<k ; i++){
    //     int size ;
    //     cin>>size;
    //     a[i] = vector<int>(size);
    //     for(int j = 0 ; j<size ; j++){
    //         cin>>a[i][j];
    //     }
    // }
    // vector<int> idx(k , 0);

    // priority_queue<pii , vector<pii> , greater<pii>>pq;

    // for(int i = 0 ; i<k ; i++ ){
    //     pq.push({a[i][0] , i});
    // }
    // vi ans;
    // while(!pq.empty()){
    //     pii x = pq.top();
    //     pq.pop();

    //     ans.pb(x.ff);
    //     if(idx[x.ss]+1<a[x.ss].size()){
    //         pii p;
    //         p.ff = a[x.ss][idx[x.ss]+1];
    //         p.ss = x.ss;
    //         pq.push(p);
    //     }
    //     idx[x.ss]+=1;
    // }
    // rep(i , 0 , ans.size()){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;

    int k;
    cin>>k;
    vector<vector<int>>a(k);
    for(int i = 0 ; i<k ; i++){
        int size ;
        cin>>size;
        a[i] = vi(size);
        for(int  j = 0 ; j<size ; j++){
            cin>>a[i][j];
        }
    }

    vector<int>ind (k , 0);
    priority_queue<pii , vector<pii> , greater<pii>>pq;

    rep(i , 0 , k){
        pq.push({a[i][0] , i});
    }

    vi ans;
    while(!pq.empty()){
        pii x = pq.top();
        pq.pop();
        ans.pb(x.ff);
        if(ind[x.ss]+1<a[x.ss].size() ){
            pq.push({a[x.ss][ind[x.ss]+1] , x.ss});
        }
        ind[x.ss]++;
    }

    rep(i , 0 , ans.size()){
        cout<<ans[i]<<" ";
    }
    cout<<endl;





    return 0;
}