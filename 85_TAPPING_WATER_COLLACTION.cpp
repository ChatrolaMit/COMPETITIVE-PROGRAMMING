#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<deque>
#include<algorithm>

#define ll long long
using namespace std;

int find_max_water(vector<int>arr , int n){
    stack<int>st;
    int ans=0;
    for(int i = 0 ; i<n ; i++){
        while(!st.empty() and arr[st.top()]<arr[i]){
            int curr = st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            else{
                int len = i-st.top()-1;
                ans+=(min(arr[st.top()]  , arr[i])-arr[curr])*len;
            }
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
    cin>>n;
    vector<int>a(n);
    for(auto &ind:a){
        cin>>ind;
    }
    int ans = find_max_water(a , n);
    cout<<ans;
    
    
    return 0;
}

// #include<iostream>
// #include<string>
// #include<vector>
// #include<stack>
// #include<deque>
// #include<algorithm>

// #define ll long long
// using namespace std;

// int find_max_water(vector<int>a , int n){
//     int ans=0 ;
//     stack<int>st;
//     for(int i = 0 ; i<n ; i++){
//         while(!st.empty() and a[st.top()]<a[i]){
//             int t = st.top();
//             st.pop();
//             if(st.empty()){
//                 break;
//             }
//             else{
//                 int len = i-st.top()-1;
//                 ans+=(min(a[st.top()] , a[i])-a[t])*len;
//             }
//             cout<<ans<<" ";

//         }
//         st.push(i);
//     }
//     return ans;
// }

// int main()
// {

//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif

//     int n ;
//     cin>>n;
//     vector<int>a(n);
//     for(auto &ind:a){
//         cin>>ind;
//     }
//     int ans = find_max_water(a , n);
//     cout<<ans;
    
    
//     return 0;
// }