#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define map_it(it) map<int, int>::iterator it;
#define setBits(x) builtin_popcount(x)

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
#endif

    int t;
    cin >> t;
    int tot=t;
    map<ll, ll> ans;
    while (t--)
    {

        vector<int> arr;
        string s;
        cin >> s;
        int k=0;
        for (int i = 1; s[i] != ']'; i++)
        {   
            int rem=0;
            // int num=0;
            while(s[i]!=',' and s[i] != ']' ){
                if(s[i] == ' '){
                    i++;
                    continue;
                }
                rem= (rem*10)+ s[i]-48;
                i++;
            }
            // cout<<rem<<" ";
            arr.push_back(rem);
            if(s[i]==']'){
                break;
            }
            
        }
        // cout<<s;
        set<ll> dist;
        for (ll i = 0; i < arr.size(); i++)
        {
            dist.insert(arr[i]);
        }
        ll sum = 0;
        for (auto a : dist)
        {
            sum += a;
            // cout<<sum<<" ";
        }
        ans[sum]=tot-t;
    }
        map<ll, ll>::iterator it;
        cout << "[";
        for (it = ans.begin(); it != ans.end(); it++)
        {
            if (it == ans.begin())
            {

                cout << it->ss << ", " << it->ff;
            }
            else
            {
                cout << ", " << it->ss << ", " << it->ff;
            }
        }
        cout << "]" << endl;
    

    return 0;
}
