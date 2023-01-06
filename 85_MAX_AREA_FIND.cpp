#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<deque>
#include<algorithm>

#define ll long long
using namespace std;

int get_max_area(vector<int>a , int n){
    int ans=0 ;
    stack<int>st;
    for(int i = 0 ; i<n ; i++){
        while(!st.empty() and a[st.top()]>a[i]){
            int t = st.top();
            int hit = a[t];
            st.pop();
            if(st.empty()){
                ans = max(ans , i*hit);
            }
            else{
                int len = i - st.top()-1;
                ans = max(ans , len*hit);
            }
            cout<<ans<<" ";

        }
        st.push(i);

    }
    return ans;
}

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n ;
    cin>>n ;
    vector<int>a(n);
    for(auto &arr:a){
        cin>>arr;
    }
    int ans = get_max_area(a , n);
    cout<<endl<<ans;
    
    return 0;
}