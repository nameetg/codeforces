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
      ll n,k;
      cin>>n>>k;
      vector<ll> s(k),a(n);
      for(auto &x:s) cin>>x;
      ll e=n-1;
      for(ll i=k-1;i>0;i--){
        ll d=s[i]-s[i-1];
        a[e]=d;
        e--;
      }
      // for(auto i=a.begin()+n-k+1;i!=a.end();++i){
      //   cout<<*i<<" ";
      // }
      if(!is_sorted(a.begin()+n-k+1,a.end())){
        cout<<"NO\n";
        continue;
      }
      double l=(double)(s[0])/(double)(n-k+1);
      bool fg=1;
      for(ll i=n-k+1;i<n;i++){
        double el=(double)(a[i]);
        if(el<l){
          fg=0;
          break;
        }
      }
      if(fg) cout<<"YES\n";
      else cout<<"NO\n";
    }
}