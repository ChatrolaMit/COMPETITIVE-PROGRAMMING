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
bool comparator(vii &v1 , vii &v2){
    
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

    vii a(n);
    rep(i , 0 , n){
        cin>>a[i].ff>>a[i].ss;
    }
    sort(a.begin() , a.end() , comparator);

    for(int i = 0 ; i<n ; i++){
        cout<<a[i].ff/a[i].ss<<" ";
    }

    int w ;
    cin>>w;

    int ans = 0;
    rep(i , 0 , n){
        if(w>=a[i].ss){
            ans+=a[i].ff;
            w-=a[i].ss;
            continue;
        }
        double vw = (double)a[i].ff/a[i].ss;
        ans+=vw*w;
        w=0;
        break;
    }
    cout<<ans<<endl;
    
    return 0;
}