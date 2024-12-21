#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> solve(vector<pair<long long, long long>> &sum, long long b)
{
  long long s = 0, e = sum.size() - 1;

  while (s <= e)
  {
    long long m = (s + e) / 2;
    if (sum[m].first <= b && b <= sum[m].second)
    {
      if (!m)
        return {m + 1, b};
      else
      {
        long long dn = b - sum[m].first + 1;
        return {m + 1, dn};
      }
    }
    else if (sum[m].first > b)
      e = m - 1;
    else if (sum[m].second < b)
      s = m + 1;
  }
  return {-1, -1};
}

int main()
{
  long long n, m;
  cin >> n >> m;

  vector<long long> a(n, 0);
  vector<pair<long long, long long>> sum;
  long long s = 0;
  for (long long i = 0; i < n; i++)
  {
    cin >> a[i];
    s += a[i];
    if (!i)
      sum.push_back({1, s});
    else
    {
      long long fRM = sum[i - 1].second;
      sum.push_back({fRM + 1, s});
    }
  }
  for (long long i = 0; i < m; i++)
  {
    long long b;
    cin >> b;
    pair<long long, long long> p = solve(sum, b);
    cout << p.first << " " << p.second << endl;
  }
}