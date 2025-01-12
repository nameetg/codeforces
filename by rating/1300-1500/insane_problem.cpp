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
      ll k,l1,r1,l2,r2;
      cin>>k>>l1>>r1>>l2>>r2;
      ll e=1,ans=0;

      while(e<=1e9){
        ll x_min = max(l1, (l2 + e - 1) / e);
        ll x_max = min(r1, r2 / e);
        if (x_min <= x_max) ans += x_max - x_min + 1;
        e=e*k;
      }
      cout<<ans<<"\n";
    }
}