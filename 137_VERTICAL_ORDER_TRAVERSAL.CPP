#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i , a , b) for(int i=a ; i<b ; i++)
#define ff first
#define map_it(it) map<int , vi > :: iterator it;
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;

map<int , vi>m;
void vertical_tra(vector<int>a ,int curr , int hd , int n ){
    if(curr>n){
        return ;
    }
    int lc = 2*curr + 1;
    int rc = 2*curr + 2;

    if(lc<n ){
        vertical_tra(a , lc ,hd-1 ,n  );
    } 
    if(rc<n){
        vertical_tra(a,rc ,hd+1 , n );
    }

    m[hd].push_back(a[curr]);
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
    for(auto &b:a){
        cin>>b;
    }

    vertical_tra(a,0,0,n);

    map_it(it);
    for(it = m.begin() ; it!=m.end() ; it++){
        for(int i = 0 ; i<it->ss.size() ; i++){
            cout<<it->ss[i]<<" ";
        }
    }

    return 0;
}

