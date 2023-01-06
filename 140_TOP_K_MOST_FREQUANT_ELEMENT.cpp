#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i , a , b) for(int i=a ; i<b ; i++)
#define ff first
#define ss second
#define pb(x , y) push_back(x,y)
#define setBits(x) builtin_popcount(x)
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif


    int n , k ;
    cin>>n>>k;
    
    vi a(n) ;
    rep(i , 0 , n){
        cin>>a[i];
    }

    map<int , int>freq;

    rep(i , 0 , n){
        int pressize = freq.size();
        if(freq[a[i]]==0 && pressize == k ){
            break;
        }
        freq[a[i]]++;
    }

    vii ans ;
    map<int , int> :: iterator it ;
    for(it = freq.begin() ; it!= freq.end() ; it++){
        if(it->ss !=0  ){
            ans.push_back({it->ff , it->ss});
        }
    }
    sort(ans.begin() , ans.end() , greater<pii>());
    vii ::iterator itt;
    for(itt = ans.begin() ; itt!=ans.end() ; itt++){
        if(itt->ss!=0)
        cout<<itt->ff<<"->"<<itt->ss<<endl;
    }
    cout<<endl;

    return 0;
}