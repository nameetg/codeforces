//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(ll r, unordered_map<ll,ll> &f, unordered_map<ll,ll> &a, vector<ll> &v){
  a[r]=1;
  if(!f[r]){ v.push_back(r); return;}
  if(!a[f[r]]) dfs(f[r],f,a,v);
  v.push_back(r);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,r=-1;
      cin>>n;
      set<ll> s;
      for(ll i=1;i<=n;i++) s.insert(i);
      unordered_map<ll,ll> f;
      for(ll i=1;i<=n;i++){
        ll a;
        cin>>a;
        if(s.count(a)) s.erase(a);
        if(a==i){ r=a;continue;}
        f[i]=a;
      }
      unordered_map<ll,ll> a;
      if(!s.size()){
        cout<<1<<"\n"<<1<<"\n"<<1<<"\n\n";
        continue;
      }
      cout<<s.size()<<"\n";
      vector<vector<ll>> aa;
      for(auto &x:s){
        vector<ll> v;
        dfs(x,f,a,v);
        aa.push_back(v);
      }
      for(ll i=0;i<aa.size();i++){
        cout<<aa[i].size()<<"\n";
        for(ll j=0;j<aa[i].size();j++){
          cout<<aa[i][j]<<" ";
        }
        cout<<"\n";
      }
      cout<<"\n";
    }
}