//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,m;
      cin>>n>>m;
      unordered_map<ll,vector<ll>> g;
      for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
      }
      ll x=-1,y=-1;
      for(ll i=1;i<=n;i++){
        ll r=g[i].size();
        ll rf=1;
        if(r){
            for(ll j=0;j<g[i].size();j++){
                ll ic=g[i][j];
                if(g[ic].size()==1){
                    rf=0;
                    break;
                }
            }
            if(rf){
                ll cf=1;
                for(ll j=0;j<g[i].size();j++){
                    ll ic=g[i][j];
                    for(ll k=0;k<g[ic].size();k++){
                        if(g[ic][k]==i) continue;
                        if(g[g[ic][k]].size()!=1){
                            cf=0;
                            break;
                        }
                    }
                    if(!cf) break;
                }
                if(cf) x=i;
            }
        }
        if(x!=-1) break;
      }
      y=g[g[x][0]].size()-1;
      x=g[x].size();
      cout<<x<<" "<<y<<endl;
    }
}