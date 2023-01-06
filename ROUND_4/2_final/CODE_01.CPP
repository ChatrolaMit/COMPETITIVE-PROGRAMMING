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
void hlp()
{
    long long int ans = 0, chk = 0;
    string s, f;
    cin >> s >> f;

    map<char, bool> mp;
    for (auto x : f)
    {
        mp[x] = true;
    }
    for (ll i = 0; i < s.length(); i++)
    {
        ll t = s[i] - 97;
        ll l = t - 1, r = t + 1, sm = 0;
        if (mp[t + 97])
            continue;
        while (l != t && r != t && sm < 26)
        {

            if (l < 0)
                l = 25;
            r %= 26;
            sm++;
            if (mp[97 + l] || mp[97 + r])
            {
                break;
            }
            l--;
            r++;
        }
        ans += sm;
    }
    cout << ans << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    ll t;
    cin >> t;

    for (ll i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ":";
        hlp();
    }

    return 0;
}