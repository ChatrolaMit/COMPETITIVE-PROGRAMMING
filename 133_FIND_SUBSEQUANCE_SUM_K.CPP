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

    int n , k;cin>>n>>k;
    vi arr(n);
    rep(i , 0 , n){
        cin>>arr[i];
    }

    priority_queue<int , vi >pq;

    for(int i = 0 ; i<n ; i++){
        pq.push(arr[i]);
    }

    int cnt = 0 , sum = 0;
    while(!pq.empty()){
        cnt++;
        sum+= pq.top();
        pq.pop();
        if(k<=sum){
            break;
        }
    }

    if(sum<k){
        cout<<-1<<endl;
    }
    else{
        cout<<cnt<<endl;
    }

    return 0;
}