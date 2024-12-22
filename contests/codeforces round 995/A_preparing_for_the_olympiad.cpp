//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      vector<ll> a(n),b(n);
      for(auto &x:a) cin>>x;
      for(auto& x:b) cin>>x;
      ll ans=a[n-1];
      for(ll i=0;i<n-1;i++) ans += max(0LL, a[i]-b[i+1]);
      cout<<ans<<endl;
    }
}
