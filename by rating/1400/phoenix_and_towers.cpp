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
      ll n,m,x;
      cin>>n>>m>>x;
      cout<<"YES"<<endl;
      set<pair<ll,ll>> s;
      for(ll i=1;i<=m;i++) s.insert({0,i});
      for(ll i=0;i<n;i++){
        ll h;cin>>h;
        pair<ll,ll> p=*s.begin();
        s.erase(p);
        cout<<p.second<<" ";
        s.insert({p.first+h,p.second});
      }
      cout<<endl;
    }
}