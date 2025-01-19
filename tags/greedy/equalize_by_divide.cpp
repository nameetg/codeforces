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
      set<pair<ll,ll>> s;
      vector<pair<ll,ll>> r;
      for(ll i=1;i<=n;i++){
        ll a;cin>>a;
        s.insert({a,i});
      }
      auto fe=(*s.begin()).first, le=(*s.rbegin()).first;
      if(fe==le){
        cout<<0<<"\n";
        continue;
      }else if(fe==1){
        cout<<-1<<"\n";
        continue;
      }
      bool fg=1;
      while(1){
        auto f=(*s.begin()).first,fi=(*s.begin()).second,l=(*s.rbegin()).first,li=(*s.rbegin()).second;
        // if(t==2||t==0||t==1)cout<<f<<" "<<l<<" ";
        if(f==1||l==1){
          fg=0;
          break;
        }else if(f==l) break;
        s.erase({l,li});
        while(l>f){
          // if(l==f)break;
          r.push_back({li,fi});
          l=(l+f-1)/f;
        }
        s.insert({l,li});
        // if(t==0||t==2||t==1) cout<<f<<" "<<l<<"\n";
        if(l==1){
          fg=0;
          break;
        }
      }
      if(!fg){
        cout<<-1<<"\n";
        continue;
      }
      cout<<r.size()<<"\n";
      for(auto &x:r){
        cout<<x.first<<" "<<x.second<<"\n";
      }
    }
}