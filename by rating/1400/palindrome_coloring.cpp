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
      string s;
      cin>>n>>k>>s;
      unordered_map<char,ll> f;
      for(ll i=0;i<n;i++) f[s[i]]++;
      ll e=0,o=0;
      for(auto &x:f){
        e+=(x.second/2);
        o+=(x.second%2);
      }
      ll ans=2*(e/k);
      o+=(2*(e%k));
      if(o>=k) ans++;
      cout<<ans<<endl;
    }
}