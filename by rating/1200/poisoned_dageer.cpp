//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll damage(vector<ll> &a, ll m){
  ll dSum=0;
  for(ll i=1;i<a.size();i++) dSum += min(m, a[i]-a[i-1]);
  return dSum+m;
}

int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,h;
      cin>>n>>h;
      vector<ll> a(n);
      for(auto &x:a) cin>>x;
      ll s=1,e=h;
      while(s<=e){
        ll m = s+(e-s)/2;
        ll d = damage(a,m);
        if(d<h) s=m+1;
        else e=m-1;
      }
      cout<<s<<endl;
    }
}