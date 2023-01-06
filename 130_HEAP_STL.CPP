#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <stack>
#include <deque>

#include <set>
#include <algorithm>
#include <climits>
#define ll long long
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    
    priority_queue<int , vector<int>>pq;

    pq.push(2);
    pq.push(3);
    pq.push(1);
    cout<<pq.top();
    pq.pop();
    cout<<pq.top();

    priority_queue<int , vector<int> , greater<int>>pqm;
    pqm.push(3);
    pqm.push(4);
    pqm.push(1);
    pqm.push(2);
    cout<<pqm.top();


    return 0;
}