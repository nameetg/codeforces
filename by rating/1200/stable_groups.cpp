//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll ix, vector<ll> &a, ll k, ll x){
  if(ix==a.size()) return 0;

  ll tm=0;
  if(a[ix]-a[ix-1]<=x){ tm += solve(ix+1,a,k,x);}
  else{
    ll d=a[ix]-a[ix-1];
    ll nk = d/x - (d%x==0);
    ll res=0;
    if(nk<=k) res=solve(ix+1,a,k-nk,x);
    tm = max(tm+solve(ix+1,a,k,x),res);
  }
  return tm;
}

int main() {
    ll t=1;
    // cin>>t;
    while(t--) {
      ll n,k,x,si=0,t=1;
      cin>>n>>k>>x;
      vector<ll> a(n),b;
      for(ll i=0;i<n;i++) cin>>a[i];
      sort(a.begin(),a.end());
      for(ll i=1;i<n;i++){
        ll d=a[i]-a[i-1];
        if(d>x) {
          t++;
          ll nk = d/x-(d%x==0);
          b.push_back(nk);
        }
      }
      sort(b.begin(),b.end());
      for(ll i=0;i<b.size();i++){
        k-=b[i];
        if(k>=0) t--;
        else break;
      }
      cout<<t<<endl;
    }
}