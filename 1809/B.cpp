#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll ans = sqrt(n);
    while (ans * ans < n)
      ans++;
    cout << ans - 1 << endl;
  }
}