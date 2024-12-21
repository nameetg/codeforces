#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t;
  cin >> t;

  while (t--)
  {
    ll n, k;
    cin >> n >> k;
    vector<ll> pos(k);
    for (ll i = 0; i < k; i++)
    {
      cin >> pos[i];
      pos[i] = n - pos[i];
    }
    sort(pos.begin(), pos.end());
    for (ll i = 1; i < k; i++)
    {
      pos[i] += pos[i - 1];
    }

    ll s = 1, e = k;
    while (s <= e)
    {
      ll m = (s + e) / 2;
      if (pos[m - 1] < n)
        s = m + 1;
      else
        e = m - 1;
    }
    cout << s - 1 << endl;
  }
}