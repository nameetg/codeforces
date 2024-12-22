//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,x,y,A=0;
      cin>>n>>x>>y;
      vector<ll> a(n);
      for(auto &e:a){
        cin>>e;
        A+=e;
      }
      sort(a.begin(),a.end());
      ll ans=0;
      for(auto& e:a){
        ll l = A-e-x, r =A-e-y;
        ll ub = upper_bound(a.begin(),a.end(),l)-a.begin();
        ll lb = lower_bound(a.begin(),a.end(),r)-a.begin();
        ans += (ub-lb);
        if(x<=A-2*e && y>=A-2*e) ans--;
      }
      cout<<ans/2<<endl;
    }
}
