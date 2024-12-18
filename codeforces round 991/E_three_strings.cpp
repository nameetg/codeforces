// E. THREE STRINGS
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<ll>> dp;
ll eval(string &a, string &b, string &c, ll i, ll j){
  if(i==a.length()&&j==b.length()) return 0;
  if(dp[i][j]!=-1) return dp[i][j];

  ll k = i+j, ans=INT_MAX;
  if(i<a.length()){
    ll res = eval(a,b,c,i+1,j)+(a[i]!=c[k]);
    ans = min(ans,res);
  }
  if(j<b.length()){
    ll res = eval(a,b,c,i,j+1)+(b[j]!=c[k]);
    ans = min(ans,res);
  }
  return dp[i][j]=ans;
}

int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      string a, b, c;
      cin>>a>>b>>c;
      ll n=a.length(),m=b.length();
      dp.assign(n+1,vector<ll>(m+1,-1));
      cout<<eval(a,b,c,0,0)<<endl;
    }
}