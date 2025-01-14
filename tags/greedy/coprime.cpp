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
      unordered_map<ll,ll> f;
      for(ll i=1;i<=n;i++){
        ll a;
        cin>>a;
        if(f.find(a)==f.end()) f[a]=i;
        else f[a]=max(f[a],i);
      }
      ll res=-1;
      for(auto x:f){
        for(auto y:f){
          if(gcd(x.first,y.first)==1) res=max(res,x.second+y.second);
        }
      }
      cout<<res<<"\n";
    }
}