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
// void hlp(){
//     int n,sm=1;
//     string s;
//     cin>>n>>s;
//     char l,c;
    

    
// }

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
        int n;
        cin >> n;
        string s;
        cin>>s ;

        map<int , vector<char>>mp;

        map<char , vector<char>>color ;
        color['r'] = {'1' , '0' ,'0'};
        color['y'] = {'0' , '1' ,'0'};
        color['b'] = {'0' , '0' ,'1'};
        color['o'] = {'1' , '1' ,'0'};
        color['p'] = {'1' , '0' ,'1'};
        color['g'] = {'0' , '1' ,'1'};
        color['a'] = {'1' , '1' ,'1'};
        
        for(int i = 0 ; i<3 ; i++){
            for(int i = 0 ; i<n ;i++){
                
            }
        }
        

        
    }
    return 0;
}