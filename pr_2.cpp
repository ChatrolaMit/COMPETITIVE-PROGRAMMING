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


    int t;
    cin >> t;
    while (t--)
    {
        string s ;
        cin>>s ;

        char a, b;
        // cin >> a >> b;
        a = s[0];
        b=s[1];
        // cout<<a<<b;
        int ans = 0;
        for(int i = 0 ; i<26 ; i++){
            if(a=='a'+i){
                ans = 25*i;
                break;
            }
        }

        if(a==b){
            ans += ans/25 +1;
        }
        else if(a>b){
            for(int i = 0 ; i<26 ; i++){
                if(b==i+'a'){
                    ans += i+1;
                    break;
                }
            }
        }
        else{
            for(int i = 0 ; i<26 ; i++){
                if(b==i+'a'){
                    ans += i;
                    break;
                }
            }
        }
        cout<<ans <<endl;
        
    }
    return 0;
}