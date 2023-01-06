#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<deque>
#include<algorithm>

#define ll long long
using namespace std;

vector<int> stock_span(vector<int>prices){
    int n = prices.size();
    vector<int>ans(n) ;
    for(auto &a:ans){
        a = 1; 
    }
    stack<pair<int , int>>st;
    for(int i = 0 ; i<n ; i++){
        while(!st.empty() and st.top().first<prices[i]){
            int p = st.top().first;
            int stap = st.top().second;
            ans[i]+=stap;
            cout<<stap<<"  ";
            st.pop();
            
        }
        st.push(make_pair(prices[i] , ans[i]));
    }
    cout<<endl;
    return ans;

}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    vector<int>prices(n);
    for(auto &a:prices){
        cin>>a;
    }
    vector<int>ans = stock_span(prices);
    for(auto a:ans){
        cout<<a<<" ";
    }
    
    
    
    return 0;
}