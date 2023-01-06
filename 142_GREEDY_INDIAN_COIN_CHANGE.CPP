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
signed main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif

    int n ;
    cin>>n;

    vector<int>arr = {1,2,5,10 , 20,50,100,200,500,2000};
    sort(arr.begin() , arr.end() ,greater<int>());
    int count = 0;
    for(int i = 0 ;i<arr.size() ; i++ ){
        
        count+=n/arr[i];
        n-=n/arr[i]*arr[i];
        
    }    
    cout<<count<<endl;



    return 0;
}