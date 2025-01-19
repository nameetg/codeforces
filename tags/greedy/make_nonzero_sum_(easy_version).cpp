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
      ll n;
      cin>>n;
      vector<ll>a(n+1);
      for(ll i=1;i<=n;i++) cin>>a[i];
      if(n%2) cout<<-1<<"\n";
      else{
        vector<pair<ll,ll>> r;
        for(ll i=1;i<=n;i+=2){
          if(a[i]==a[i+1]) r.push_back({i,i+1});
          else{
            r.push_back({i,i});
            r.push_back({i+1,i+1});
          }
        }
        cout<<r.size()<<"\n";
        for(auto &x:r) cout<<x.first<<" "<<x.second<<"\n";
      }
    }
}