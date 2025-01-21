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
      ll n,m,k;
      cin>>n>>m;
      vector<ll> a(n);
      for(auto &x:a) cin>>x;
      cin>>k;
      vector<ll> b(k);
      for(auto &x:b) cin>>x;
      vector<ll> ca(n),cb(k);
      for(ll i=0;i<n;i++){
        ca[i]=1;
        while(a[i]%m==0){
          a[i]/=m;
          ca[i]*=m;
        }
      }
      for(ll i=0;i<k;i++){
        cb[i]=1;
        while(b[i]%m==0){
          b[i]/=m;
          cb[i]*=m;
        }
      }
      ll i=0,j=0;
      // bool fg=1;
      while(i<n&&j<k){
        if(a[i]!=b[j]) break;
        ll x=min(ca[i],cb[j]);
        ca[i]-=x,cb[j]-=x;
        if(!ca[i]) i++;
        if(!cb[j]) j++;
      }
      if(i==n&&j==k) cout<<"YES\n";
      else cout<<"NO\n";
    }
}