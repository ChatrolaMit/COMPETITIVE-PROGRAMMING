#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE4
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    int n;
    cin >> n;

    vi arr(n);
    for (auto &a : arr)
    {
        cin >> a;
    }

    int pref_sum = 0;
    map<int, int> mp;

    rep(i, 0, n)
    {
        pref_sum += arr[i];
        mp[pref_sum]++;
    }

    map<int, int>::iterator it;

    int sum = 0;

    for (it = mp.begin(); it != mp.end(); it++)
    {
        int c = it->ss;
        sum += (c * (c - 1)) / 2;

        if (it->ff == 0)
        {
            sum += it->ss;
        }
    }

    cout << sum << endl;

    return 0;
}