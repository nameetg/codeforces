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
      ll n;
      cin>>n;
      vector<ll> p(n);
      for(auto &x:p){
        cin>>x;
        x--;
      }
      ll mx=-1,ans=0;
      for(ll i=0;i<n;i++){
        mx=max(mx,p[i]);
        if(mx==i) ans++;
      }
      cout<<ans<<"\n";
    }
}