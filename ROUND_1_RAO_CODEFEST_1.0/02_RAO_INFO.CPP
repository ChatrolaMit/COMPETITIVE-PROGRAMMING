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

void fibo()
{
  int n;
  cin >> n;
  int a = 0, b = 1, flg = 0, c = 0;
  while (c < n)
  {
    c = a + b;
    if (c == n)
    {
      flg = 1;
      break;
    }
    a = b;
    b = c;
  }
  if (flg)
  {
      cout << "YES" << endl;
    a = b;
    b = c;
    for (int j = 0; j < 5; j++)
    {
      c = a + b;
      cout << c << endl;
      a = b;
      b = c;
    }
  }
  else
  {
    cout << "NO" << endl;
    cout << b << endl;
    for (int j = 0; j < 4; j++)
    {
      c = a + b;
      cout << c << endl;
      a = b;
      b = c;
    }
  }
}

int main()
{
  // #ifndef ONLINE_JUDGE
  //     freopen("input.txt", "r", stdin);
  //     freopen("output.txt", "w", stdout);
  //     freopen("error.txt", "w", stderr);
  // #endif

  // int t;
  // cin >> t;
  // while (t--)
  // {
  //     int n ;
  //     cin>>n;

  // }
  fibo();

  return 0;
}