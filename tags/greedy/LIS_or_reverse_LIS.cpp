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
      ll n,dn=0,sn=0;
      cin>>n;
      unordered_map<ll,ll>f;
      for(ll i=1;i<=n;i++){
        ll a;
        cin>>a;
        f[a]++;
      }
      for(auto &x:f){
        if(x.second>=2)dn++;
        else sn++;
      }
      cout<<dn+(sn+1)/2<<"\n";
    }
}