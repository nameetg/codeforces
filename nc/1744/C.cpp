#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    char c;
    string s;
    cin >> n >> c >> s;

    s = s + s;
    int ans = 0, right = 0;

    for (int i = s.length() - 1; i >= 0; i--)
    {
      if (s[i] == 'g')
        right = i;
      else if (s[i] == c)
        ans = max(ans, right - i);
    }
    cout << ans << endl;
  }
}