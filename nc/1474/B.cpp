#include <bits/stdc++.h>
using namespace std;

bool prime(long long n)
{
  for (long long i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    long long d;
    cin >> d;
    long long fn = 1 + d;
    while (!prime(fn))
      fn++;
    long long sn = fn + d;
    while (!prime(sn))
      sn++;
    cout << fn * sn << endl;
  }
}