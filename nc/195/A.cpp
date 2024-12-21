#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll a, b, c, x = 0;
  cin >> a >> b >> c;

  while (b * x < c * a - c * b)
    x++;
  cout << x << endl;
}