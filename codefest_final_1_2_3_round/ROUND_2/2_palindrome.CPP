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

    string s ;
    cin>>s ;
    int n = s.length();
    int l=0,r=n-1;
    bool isPlindrome=true;
    while(l<r){
        if(s[l]!=s[r]){ cout<<"NO"<<endl; isPlindrome=false; break;}
        l++,r--;
    }
    if(isPlindrome) cout<<"YES"<<endl;
    return 0;
}