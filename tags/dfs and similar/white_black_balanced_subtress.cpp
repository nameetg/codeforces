//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long

pair<ll,ll> dfs(ll n, unordered_map<ll,vector<ll>>& f, string &s, ll &ct){
  if(f[n].size()==0){
    if(s[n-1]=='W') return {1,0};
    return {0,1};
  }
  pair<ll,ll> wb={0,0};
  if(s[n-1]=='W') wb.first++;
  else wb.second++;

  for(ll i=0;i<f[n].size();i++){
    pair p=dfs(f[n][i],f,s,ct);
    wb.first+=p.first;
    wb.second+=p.second;
  }
  if(wb.first==wb.second)ct++;
  return wb;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      unordered_map<ll,vector<ll>> f;
      for(ll i=2;i<=n;i++){
        ll a;
        cin>>a;
        f[a].push_back(i);
      }
      string s;
      cin>>s;
      ll ans=0;
      pair<ll,ll> p=dfs(1,f,s,ans);
      cout<<ans<<endl;
    }
}