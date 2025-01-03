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
      ll n,k;
      cin>>n>>k;
      unordered_map<ll,vector<ll>> f;
      for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(f[x].size()<k) f[x].push_back(i);
      }
      ll ec=0,c=0;
      vector<ll> a(n,0);
      for(auto &x:f) ec+=x.second.size();
      ec=ec-ec%k;
      for(auto &x:f){
        for(auto &e:x.second){
          a[e]=k-c%k;
          c++;
          ec--;
          if(!ec) break;
        }
        if(!ec) break;
      }
      for(auto &x:a) cout<<x<<" ";
      cout<<endl;
    }
}