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
ll fact(ll n){
    ll ans=1;
    for(int i = 1 ; i<=n ; i++){
        ans*=i;
    }
    return ans;
}
int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    //     freopen("error.txt", "w", stderr);
    // #endif


    int xx;
    cin >> xx;
    while (xx--)
    {
        string s ; cin>>s ;
        string t; cin>>t;

        int tag = 0;
        int n = t.length();
        for(int i = 0 ; i<n ; i++){
            if(t[i]=='a' and n!=1){
                cout<<-1<<endl;
                tag=1;
                break;
            }
        }

        if(tag==1){
            continue;
        }

        set<char>uniq ;
        for(int i = 0 ; i<n ; i++){
            uniq.insert(t[i]);
        }

        if(n!=uniq.size()){
            cout<<-1<<endl;
            continue;
        }
        if(t=="a"){
            cout<<1<<endl;
        }
        else{
            cout<<s.length()+1<<endl;
        }


        
    }
    return 0;
}