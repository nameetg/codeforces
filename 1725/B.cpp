#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll n, d;
  cin >> n >> d;

  vector<ll> p(n);
  for (ll i = 0; i < n; i++)
    cin >> p[i];
  sort(p.begin(), p.end());
  ll ans = 0, rp = n;
  for (ll i = n - 1; i >= 0; i--)
  {
    ll pn = d / p[i] + 1;
    if (rp >= pn)
    {
      ans++;
      rp -= pn;
    }
    else
      break;
  }
  cout << ans << endl;
}