#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPerfect(int n)
{
  int sum = 0;
  while (n)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum == 10;
}

int main()
{
  int k;
  cin >> k;
  int ans = 0;
  for (int i = 19; i < INT_MAX; i++)
  {
    if (isPerfect(i))
    {
      k--;
      if (!k)
      {
        ans = i;
        break;
      }
    }
  }
  cout << ans << endl;
}