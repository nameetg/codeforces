#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    long long ps = 0;
    while (n--)
    {
      long long a;
      cin >> a;
      ps += a;
    }
    long long sr = sqrt(ps);
    if (sr * sr == ps)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}