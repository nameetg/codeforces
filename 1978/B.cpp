#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n, a, b;
    cin >> n >> a >> b;
    if (a > b)
    {

      cout << a * n << endl;
    }
    else
    {
      if (b - n + 1 >= a)
      {
        long long sum = (n * (2 * b + (n - 1) * (-1))) / 2;
        cout << sum << endl;
      }
      else
      {
        long long bn = b - a;
        long long bSum = (bn * (2 * b + (bn - 1) * (-1))) / 2;
        long long an = n - bn;
        long long aSum = an * a;
        cout << aSum + bSum << endl;
      }
    }
  }
}