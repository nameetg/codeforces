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
      unordered_map<ll,vector<ll>> f;
      for(ll i=0;i<n;i++){
        cin>>c[i];
        f[c[i]].push_back(i);
      }
      for(ll i=1;i<=n;i++){
        if(f[i].size()){
          ll s=1;
          for(ll j=0;j<f[i].size()-1;j++){
            if((f[i][j+1]-f[i][j])%2) s++;
          }
          cout<<s<<" ";
        }
        else cout<<0<<" ";
      }
      cout<<"\n";
    }
}