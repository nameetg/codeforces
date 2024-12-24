//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    // cin>>t;
    while(t--) {
      ll n,d;
      cin>>n>>d;
      vector<ll> a(n);
      for(auto &x:a) cin>>x;
      ll ans=0;
      for(ll i=0;i<n;i++){
        ll ub=upper_bound(a.begin(),a.end(),a[i]+d)-a.begin()-i;
        if(ub>=3) ans += ((ub-1)*(ub-2))/2;
      }
      cout<<ans<<endl;
    }
}