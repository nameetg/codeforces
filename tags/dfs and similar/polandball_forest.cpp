//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long

unordered_map<ll,vector<ll>> g;
unordered_map<ll,ll> v;

void dfs(ll n){
  v[n]++;
  if(!g[n].size()) return ;
  for(ll i=0;i<g[n].size();i++){
    if(!v[g[n][i]]) dfs(g[n][i]);
  }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
      ll p;
      cin>>p;
      g[i].push_back(p);
      g[p].push_back(i);
    }
    ll res=0;
    for(ll i=1;i<=n;i++){
      if(!v[i]){
        res++;
        dfs(i);
      }
    }
    cout<<res<<endl;
}