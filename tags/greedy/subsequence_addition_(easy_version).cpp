//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      vector<ll> c(n);
      for(auto &x:c) cin>>x;
      sort(c.begin(),c.end());
      bool fg=1;
      ll A=c[0];
      if(A!=1){
        cout<<"NO\n";
        continue;
      }
      for(ll i=1;i<n;i++){
        if(c[i]>A){
          fg=0;
          break;
        } else A+=c[i];
      }
      if(fg) cout<<"YES\n";
      else cout<<"NO\n";
    }
}