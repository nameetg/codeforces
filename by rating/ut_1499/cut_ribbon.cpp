//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,c;

ll solve(ll n,vector<ll> &dp){
  if(!n) return 0;
  if(n<0) return INT_MIN;
  if(dp[n]!=-1) return dp[n];
  ll ap=0,bp=0,cp=0;
  ap+=(1+solve(n-a,dp));
  bp+=(1+solve(n-b,dp));
  cp+=(1+solve(n-c,dp));

  return dp[n]=max(ap,max(bp,cp));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n>>a>>b>>c;
    vector<ll> dp(n+1,-1);
    cout<<solve(n,dp)<<endl;
    
}