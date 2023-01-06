#include<bits/stdc++.h>
#include <iostream>
#include<string>
#include<vector>
#include<stack>
#include<deque>
#include <algorithm>

#define ll long long
using namespace std;


int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // input 

    int n ,  k ;
    cin>>n>>k;
    vector<int>vec(n);
    for(auto &a : vec){
        cin>>a;
    }

    // algo 

    deque<int>q ;
    vector<int>ans;

    for(int i = 0 ; i<k ; i++){
        while(!q.empty() and vec[q.back()]<vec[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(vec[q.front()]);

    for(int i = k ; i<n ; i++){
        if(q.front()==i-k){
            q.pop_front();
        }
        while(!q.empty() and vec[q.back()]<vec[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(vec[q.front()]);

    }

    for(auto a: ans){
        cout<<a<<"  ";
    }

    return 0;
}
// #include<bits/stdc++.h>
// #include <iostream>
// #include<string>
// #include<vector>
// #include<stack>
// #include<deque>
// #include <algorithm>

// #define ll long long
// using namespace std;

// int main()
// {

//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif

//     int n , k ; 
//     cin>>n>>k;
//     vector<int>arr(n);
//     for(auto &a:arr){
//         cin>>a;
        
//     }
//     // multiset< int , greater<int>> s;
//     vector<int>ans;
//     deque<int>q;
//     for(int i = 0 ; i<k ; i++){
//         while(!q.empty() and arr[q.back()]< arr[i]){
//             q.pop_back();
//         }
//         q.push_back(i);
//     }
//     ans.push_back(arr[q.front()]);
//     for(int i = k ; i<n ; i++){
//         if(q.front()==i-k){
//             q.pop_front();
//         }
//         while(!q.empty() and arr[q.back()]<arr[i]){
//             q.pop_back();
//         }
//         q.push_back(i);
//         ans.push_back(arr[q.front()]);
//     }
//     for(auto a:ans ){
//         cout<<a<<" ";
//     }




        
//     return 0;
// }

// #include<bits/stdc++.h>
// #include<iostream>
// #include<string>
// #include<vector>
// #include<stack>
// #include<deque>
// #include<algorithm>

// #define ll long long
// using namespace std;

// int main()
// {

//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif

//     int n , k ;
//     cin>>n>>k;
//     vector<int>vec(n);
//     for(auto &a : vec){
//         cin>>a;
//     }
//     vector<int>ans;
//     multiset<int , greater<int>> ms;

//     for(int i = 0 ; i<k ; i++){
//         ms.insert(vec[i]);
//     }
//     ans.push_back(*ms.begin());
//     for(int i = k;i<n; i++){
//         ms.erase(ms.lower_bound(vec[i-k]));
//         ms.insert(vec[i]);
//         ans.push_back(*ms.begin());
//     }
//     for(auto a :ans){
//         cout<<a<<" ";
//     }

    
    
    
//     return 0;
// }