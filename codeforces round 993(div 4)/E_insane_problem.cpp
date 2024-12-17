// E. INSANE PROBLEM

#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll k,l1,r1,l2,r2;
      cin>>k>>l1>>r1>>l2>>r2;
      int ans =0;
      ll pk=1;
      while(pk<=1e9){
        ll l = max(l1, (l2+pk-1)/pk);
        ll r = min(r1, r2/pk);
        ans += max(0ll, r-l+1);
        pk *= k;
      }
      cout<<ans<<endl;
    }
}
