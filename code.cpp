#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i , a , b) for(int i=a ; i<b ; i++)
#define ff first
#define map_it(it) map<int , vi > :: iterator it;
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
        
        // ll n ;
        // cin>>n;
        string s ;
        cin>>s ;
        int count = 3;
        map<char , int>check ;
        check['a'] = 1 ;
        check['b'] = 1 ;
        check['c'] = 1 ;
        map<char , int>freq;
        freq['a'] = 0 ;
        freq['b'] = 0 ;
        freq['c'] = 0 ;
        // cout<<n;
        int i = 0;
        for(  ; (i<s.size()) ; i++){
            freq[s[i]]++;
            if(check[s[i]]==1){
                count--;
                // cout<<s[i]<<" "<<check[s[i]]<<count<<endl;
                check[s[i]]=0;
                if(count==0){
                    break;
                }
            }
        }
        i++;
        if(i>s.length()){
            cout<<0<<endl;
            continue;
        }
        
        int ans = i;
        int j =0;
        // i++;
        // cout<<i<<endl;
        // i++;
        for(int j = 0; j<s.size() and i<=s.size() ; ) {
            if(freq[s[j]]>1){
                freq[s[j]]--;
                j++;
            }
            else{
                freq[s[i]]++;
                i++;
            }
            ans = min(ans , i-j);



        }           
        cout<<ans<<endl; 
        
        

        
        


        
        
    }

    return 0;
}