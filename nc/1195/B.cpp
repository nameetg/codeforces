#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll n, k;
  cin >> n >> k;

  ll c = -2 * (k + n);
  ll D = 9 - 4 * c;

  ll x = (-3 + sqrt(D)) / 2;
  ll y = n - x;
  cout << y << endl;
}