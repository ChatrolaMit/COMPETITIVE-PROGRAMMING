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
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    //     freopen("error.txt", "w", stderr);
    // #endif


    int h ,m  ;
    string s ;
    cin>>h >>m ;
    cin>>s ;
    if(s=="AM" or s=="am"){
        if(h==12){
            h=0;
        }
    }
    if(s=="PM"|| s=="pm"){
        if(h!=12){
            h+=12;
        }
    }
    cout<<h<<" : "<<m;
    return 0;
}