//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f(string &a, string &b, string &c, ll ai, ll bi, vector<vector<ll>> &dp){
  if(ai==a.length()||bi==b.length()){
    ll res=0;
    if(ai==a.length()){
      while(bi<b.length()){
        if(b[bi]!=c[ai+bi])res++;
        bi++;
      }
    }else if(bi==b.length()){
      while(ai<a.length()){
        if(a[ai]!=c[ai+bi]) res++;
        ai++;
      }
    }
    return res;
  }
  if(dp[ai][bi]!=-1) return dp[ai][bi];
  ll res=0;
  if(a[ai]==c[ai+bi]&&b[bi]==c[ai+bi]) return dp[ai][bi]= min(f(a,b,c,ai+1,bi,dp),f(a,b,c,ai,bi+1,dp));
  else if(a[ai]==c[ai+bi]) return dp[ai][bi]=min(f(a,b,c,ai+1,bi,dp),1+f(a,b,c,ai,bi+1,dp));
  else if(b[bi]==c[ai+bi]) return dp[ai][bi]=min(1+f(a,b,c,ai+1,bi,dp),f(a,b,c,ai,bi+1,dp));
  return dp[ai][bi]=1+min(f(a,b,c,ai+1,bi,dp),f(a,b,c,ai,bi+1,dp));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      string a,b,c;
      cin>>a>>b>>c;
      vector<vector<ll>> dp(a.length(),vector<ll>(b.length(),-1));
      cout<<f(a,b,c,0,0,dp)<<"\n";
    }
}