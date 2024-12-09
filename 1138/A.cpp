#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isTrue(vector<ll> &t, ll s, ll e)
{
  if (e == s + 1)
  {
    return (t[e] == 2 && t[s] == 1) || (t[e] == 1 && t[s] == 2);
  }

  return t[s] == t[s + 1] && t[e] == t[e - 1];
}

pair<ll, ll> subSegment(ll ind, vector<ll> &t)
{
  ll s = ind, e = ind + 1;

  while (s >= 0 && e < t.size())
  {
    if (!isTrue(t, s, e))
    {
      ll ans = e - s - 1;
      ll nInd = e - 1;
      return {ans, nInd};
    }
    s--;
    e++;
  }
  ll ans = e - s - 1;
  ll nInd = e - 1;
  // cout<<"ans"<<ans<<endl;
  return {ans, nInd};
}

int main()
{
  ll n;
  cin >> n;

  vector<ll> t(n);
  for (ll i = 0; i < n; i++)
    cin >> t[i];

  ll i = 0;
  ll ans = 0;

  while (i < n)
  {
    pair<ll, ll> p = subSegment(i, t);
    ans = max(ans, p.first);
    i = p.second + 1;
  }

  cout << ans << endl;
}