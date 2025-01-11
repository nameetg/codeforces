//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
unordered_map<ll,ll> dp;
ll dfs(ll n, vector<ll> &p, ll ind, vector<ll> &v){
    v[n]=ind;
    if(n==ind) return 1;
    // if(dp[n]) return dp[n];
    return 1+dfs(p[n],p,ind,v);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      vector<ll> p(n);
      dp.clear();
      vector<ll> v(n,-1);
      for(auto &x:p){
        cin>>x;
        x--;
      }
      for(ll i=0;i<n;i++){
        if(v[i]==-1){dp[i]=dfs(p[i],p,i,v);}
      }
      for(auto &x:v){
        cout<<dp[x]<<" ";
      }
      cout<<endl;
    }
}