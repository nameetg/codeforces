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
      ll n,le;
      cin>>n;
      unordered_map<ll,ll>f;
      vector<pair<ll,ll>> a;
      cin>>le;
      for(ll i=2;i<=n;i++){
        ll x;
        cin>>x;
        if(x<le){
          ll d=le-x;
          a.push_back({d,i});
        }
        le=x;
      }
      if(!a.size()){
        for(ll i=1;i<=n;i++) cout<<1<<(i==n?"\n":" ");
      }else{
        sort(a.begin(),a.end());
        ll ct=1;
        le=a[0].first;
        f[a[0].first]=a[0].second;
        for(ll i=1;i<a.size();i++){
          if(le==a[i].first){
            f[a[i].first+ct]=a[i].second;
            ct++;
          }else{
            if(a[i].first>=le+ct){f[a[i].first]=a[i].second;
            ct=1;}else{
              a[i].first=le;
              f[a[i].first+ct]=a[i].second;
              ct++;
            }
          }
          le=a[i].first;
        }
        for(ll i=1;i<=n;i++){
        if(f.find(i)==f.end()) cout<<1<<(i==n?"\n":" ");
        else cout<<f[i]<<(i==n?"\n":" ");
        }
      }
    }
}