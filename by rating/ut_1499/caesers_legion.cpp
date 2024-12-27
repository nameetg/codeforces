//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ta,tb,M=1e8;

ll f(ll n,ll m, ll a,ll b,vector<vector<vector<vector<ll>>>> &dp){
  if(!n&&!m) return 1;

  if(dp[n][m][a][b]!=-1) return dp[n][m][a][b];
  ll aw=0,bw=0;
  if(a&&n) aw=f(n-1,m,a-1,tb,dp);
  if(b&&m) bw=f(n,m-1,ta,b-1,dp);

  return dp[n][m][a][b]= (aw%M+bw%M)%M;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>n>>m>>ta>>tb;
    vector<vector<vector<vector<ll>>>> dp(n + 1, vector<vector<vector<ll>>>(m + 1, vector<vector<ll>>(ta + 1, vector<ll>(tb + 1, -1))));
    cout<<f(n,m,ta,tb,dp)<<endl;
}