#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n, q;
    cin >> n >> q;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
      cin >> a[i];

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for (ll i = 1; i < n; i++)
      a[i] += a[i - 1];

    for (ll i = 0; i < q; i++)
    {
      ll x;
      cin >> x;
      ll ans = lower_bound(a.begin(), a.end(), x) - a.begin();
      if (ans >= n)
        cout << -1 << endl;
      else
        cout << ans + 1 << endl;
    }
  }
}