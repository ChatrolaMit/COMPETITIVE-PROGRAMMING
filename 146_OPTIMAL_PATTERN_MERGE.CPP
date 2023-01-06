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

    int n ;
    cin>>n ;

    vi arr(n);
    priority_queue<int , vector<int>,greater<int>>pq;

    for(auto &a:arr){
        cin>>a;
    }

    for(int i = 0 ; i<n  ;i++){
        pq.push(arr[i]);
    }

    int ans = 0;
    while(pq.size()>1){
        int e1 = pq.top();
        pq.pop();
        int e2 = pq.top();
        pq.pop();
        pq.push(e1+e2);
        ans +=e1+e2; 
    }
    cout<<ans<<endl;

    


    
    return 0;
}






 