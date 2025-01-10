//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;
void dfs(ll n, unordered_map<ll,vector<ll>> &f, unordered_map<ll,ll> &v){
  v[n]=1;
  if(!f[n].size()) return;
  for(auto &x:f[n]){
    if(!v[x]) dfs(x,f,v);
  }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      vector<ll> a(n),b(n);
      for(auto &x:a) cin>>x;
      for(auto &x:b) cin>>x;
      unordered_map<ll,ll> v;
      unordered_map<ll,vector<ll>> f;
      for(ll i=0;i<n;i++){
        f[a[i]].push_back(b[i]);
        f[b[i]].push_back(a[i]);
      }
      ll c=1;
      for(ll i=1;i<=n;i++){
        if(!v[i]){
          c=(2*c)%M;
          dfs(i,f,v);
        }
      }
      cout<<c<<"\n";
    }
}