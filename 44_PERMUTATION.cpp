#include <iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

vector<vector<int>> ans;

void permute(vector<int> &a,int idx ){
    if(a.size()==idx){
        ans.push_back(a);
        return ;
    }
    for(int i = 0 ; i<a.size() ; i++){
        swap(a[i] , a[idx]);
        permute(a, idx+1);
        swap(a[i] , a[idx]);
    }
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n ;
    cin>>n;
    
    vector<int>a(n);
    for(auto &i :a){
        cin>>i;
    }
    permute(a,0);
    for(auto v : ans){
        for(auto i : v){
                cout<<i<<" ";
        }
        cout<<endl;
    }


    
    
    return 0;
}