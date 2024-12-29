//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,d;
    cin>>n>>d;
    vector<ll> x(n);
    for(auto &a:x) cin>>a;
    ll ans=0;
    for(ll i=0;i<n;i++){
      ll ub=upper_bound(x.begin(),x.end(),x[i]+d)-x.begin()-i;
      if(ub>=3) ans += ((ub-1)*(ub-2)/2);
    }
    cout<<ans<<endl;
}