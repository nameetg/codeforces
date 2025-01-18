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
      ll n,q;
      cin>>n>>q;
      vector<ll> a(n);
      for(auto &x:a) cin>>x;
      vector<ll> ps(n);
      ps[0]=a[0];
      for(ll i=1;i<n;i++) ps[i]=ps[i-1]+a[i];
      for(ll i=1;i<n;i++) a[i]=max(a[i],a[i-1]);

      for(ll i=0;i<q;i++){
        ll h;
        cin>>h;
        ll si=upper_bound(a.begin(),a.end(),h)-a.begin();
        if(si==0) cout<<0<<" ";
        else cout<<ps[si-1]<<" ";
      }
      cout<<"\n";
    }
}