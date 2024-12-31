//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    vector<ll> a(n),d(n);
    for(auto &x:a) cin>>x;
    for(ll i=0;i<n;i++){
      ll b;
      cin>>b;
      d[b-1]=i;
    }
    ll ans=0,mx=-1;
    for(ll i=0;i<n;i++){
      if(d[a[i]-1]<=mx) ans++;
      mx =max(mx,d[a[i]-1]);
    }
    cout<<ans<<endl;
}