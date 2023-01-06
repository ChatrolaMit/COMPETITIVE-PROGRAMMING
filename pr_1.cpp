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
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif


    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans ;
        // if(a>=b ){
        //     if(a%b==0){
        //         ans = a/b;
        //     }
        //     else{
        //         ans = 0;
        //     }
        // }
        // else{
            if(b%a==0){
                ans = b/a;
            }
            else{
                ans = 0;
            }
        // }
        if(ans==0){
            cout<<0<<" "<<0<<endl;
        }
        else{
            cout<<1<<" "<<ans<<endl;
        }
    }
    return 0;
}