#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll n, q;
  cin >> n;
  vector<ll> x(n);
  for (ll i = 0; i < n; i++)
    cin >> x[i];
  sort(x.begin(), x.end());

  cin >> q;
  for (ll i = 0; i < q; i++)
  {
    ll m;
    cin >> m;
    cout << upper_bound(x.begin(), x.end(), m) - x.begin() << endl;
  }
}