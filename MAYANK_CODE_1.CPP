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
int count_test(int money , vector<int>mon ,vector<int>cash , int i , int test){
    while(money>=mon[i]){
                int txt = money/mon[i];
                money = (money%mon[i]) + txt*cash[i];
                test+=txt;
            }
    return test;
}
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
        int n, r;
        cin >> n >> r;

        vector<int>mon(n);
        for(auto &a : mon)
            cin>>a;
        vector<int>cash(n);
        for(auto &a : cash)
            cin>>a;

        // sort()


        int ans =0 ;
        for(int i = 0 ;  i<n ; i++){
            int money = r ;
            int test = money/mon[i] ;
            money = (money%mon[i]) + test*cash[i]; 
            while(money>=mon[i]){
                int txt = money/mon[i];
                money = (money%mon[i]) + txt*cash[i];
                test+=txt;
            }
            cout<<test <<" "<<money<<endl;
            for(int j = 0 ; j<n ; j++){
                if(mon[i]<=money){
                    test =max( count_test(money , mon , cash , j , test),test);
                }
            }
            ans = max(test , ans);
        }
        cout<<ans<<endl;

        
    }
    return 0;
}