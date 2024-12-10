#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll n;
  cin >> n;
  vector<long long> a(n);
  for (long long i = 0; i < n; i++)
    cin >> a[i];

  sort(a.begin(), a.end());

  if (n % 2)
  {
    cout << n / 2 << endl;
    for (ll i = 0; i < n - 1; i += 2)
    {
      swap(a[i], a[i + 1]);
      cout << a[i] << " " << a[i + 1] << " ";
    }
    cout << a[n - 1] << endl;
  }
  else
  {
    cout << n / 2 - 1 << endl;
    for (ll i = 0; i < n; i += 2)
    {
      swap(a[i], a[i + 1]);
      cout << a[i] << " " << a[i + 1] << " ";
    }
    cout << endl;
  }
}