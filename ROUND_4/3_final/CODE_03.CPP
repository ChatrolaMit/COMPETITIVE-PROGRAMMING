#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;

ll dfs(vector<vector<ll>> arr, ll i, ll score, ll p, ll n, map<pair<ll, ll>, ll> &mp)
{
    if (i >= n)
        return 0;
    // if(i>=23) cout<<"i="<<i<<" "<<score<<endl;
    if (mp[{i, score}] != 0)
        return mp[{i, score}];
    return mp[{i, score}] = arr[i][p - 1] - arr[i][0] + min((abs(score - arr[i][0]) + dfs(arr, i + 1, arr[i][p - 1], p, n, mp)), (abs(score - arr[i][p - 1]) + dfs(arr, i + 1, arr[i][0], p, n, mp)));
}

void hlp()
{

    ll n, p;
    cin >> n >> p;
    vector<vector<ll>> arr(n, vector<ll>(p));
    map<pair<ll, ll>, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < p; j++)
        {
            cin >> arr[i][j];
        }
        sort(arr[i].begin(), arr[i].end());
    }
    cout << dfs(arr, 0, 0, p, n, mp) << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll t;
    cin >> t;
    while (t--)
    {
        hlp();
    }
    return 0;
}