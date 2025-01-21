//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool f(ll n, unordered_map<ll,ll> &a, ll t){
  ll lt=0,ht=0;
  for(ll i=1;i<=n;i++){
    if(t==a[i]) continue;
    else if(t<a[i]) lt+=(a[i]-t);
    else ht+=((t-a[i])/2);
  }
  return ht>=lt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,m;
      cin>>n>>m;
      unordered_map<ll,ll> a;
      for(ll i=0;i<m;i++){
        ll x;
        cin>>x;
        a[x]++;
      }
      ll l=1,r=m;
      while(l<=r){
        ll m=(l+r)/2;
        if(f(n,a,m))r=m-1;
        else l=m+1;
      }
      cout<<r+1<<"\n";
    }
}