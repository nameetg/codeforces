//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> kk(n+1,0);
    unordered_map<ll,vector<pair<ll,ll>>> g;
    while(m--){
      ll u,v,l;
      cin>>u>>v>>l;
      g[u].push_back({v,l});
      g[v].push_back({u,l});
    }
    while(k--){
      ll a;
      cin>>a;
      kk[a]=1;
    }
    ll res=INT_MAX;
    for(auto &x:g){
      ll u=x.first;
      for(auto a:x.second){
        ll v=a.first,l=a.second;
        if(kk[v]&&kk[u]) continue;
        else if(kk[v]||kk[u]) res =min(res,l);
      }
    }
    cout<<(res==INT_MAX?-1:res)<<"\n";
}