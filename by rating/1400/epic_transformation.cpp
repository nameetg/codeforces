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
      ll n,mx=-1;
      cin>>n;
      unordered_map<ll,ll> f;
      for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        f[x]++;
        mx=max(mx,f[x]);
      }
      if(mx<=n/2){
        if(n%2) cout<<1<<endl;
        else cout<<0<<endl;
      }else cout<<2*mx-n<<endl;
    }
}