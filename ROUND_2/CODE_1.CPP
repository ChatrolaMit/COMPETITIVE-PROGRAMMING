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

void hlp(){
    int  n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<=n;i++){
       if(i%3==0) arr.push_back(i);
       else if(i%5==0) arr.push_back(i);
    }


    for(int i=0;i<arr.size();i++){
        unsigned long long int mul=1;
    for(int j=1;j<=arr[i];j++){ mul*=j;}
    cout<<mul<<endl;}

    
    

}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    //     freopen("error.txt", "w", stderr);
    // #endif


    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int a, b;
    //     cin >> a >> b;
        
    // }
    hlp();
    return 0;
}