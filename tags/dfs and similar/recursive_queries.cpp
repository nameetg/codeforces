//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f(ll n){
  if(n<10) return n;
  ll p=1;
  while(n){
    if(n%10) p*=(n%10);
    n/=10;
  }
  return f(p);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<ll> ans(10);
    vector<vector<ll>> v(10,vector<ll>(1e6+3,0));
    for(ll i=1;i<=1e6;i++) v[f(i)][i]++;
    for(ll i=1;i<10;i++){
      for(ll j=1;j<=1e6;j++){
        v[i][j]+=v[i][j-1];
      }
    }
    ll t=1;
    cin>>t;
    while(t--) {
      ll l,r,k;
      cin>>l>>r>>k;
      cout<<v[k][r]-v[k][l-1]<<"\n";
    }
}