#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<deque>
#include<algorithm>

#define ll long long
using namespace std;

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    string s ;
    cin>>s;
    vector<int>arr(128);
    for(auto &i:arr){
        i = -1;
    }



    int n = s.size();
    int len = 0;
    int start = 0 ;
    for(int i = 0 ; i<n ; i++){
        if(arr[s[i]]!=-1){
            cout<<start<<endl;
            start = arr[s[i]];
            
        }
        arr[s[i]] = i;
        len = max(len , i-start);

    }
    cout<<len;

    
    
    return 0;
}