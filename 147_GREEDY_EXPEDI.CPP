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
    cin>>n;

    vii arr(n);
    
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i].first>>arr[i].second;
    }
    
    int l ,p;
    cin>>l>>p;

    for(int i = 0 ; i<n ; i++){
        arr[i].ff = abs(arr[i].ff-l);

    }
    sort(arr.begin() , arr.end() , [&](pii &a , pii &b ){
        return a.ff < b.ff;
    } );

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i].ff<<" "<<arr[i].ss<<endl;
    }

    priority_queue<int , vector<int>>pq;
    int count=0 , d=0;
    for(int i = 0 ; i<n ; i++){
        pq.push(arr[i].second);
        if(i!=0)
        d= arr[i].first;
        if(p>=arr[i].first-d){

        }
        else{
            while(!(p>=d)){
                count++;
                cout<<pq.top()<<" ";
            p+=pq.top();
            pq.pop();}
            cout<<endl;
        }
        p-=arr[i].second;
    }
    cout<<count<<endl;

    
    return 0;
}