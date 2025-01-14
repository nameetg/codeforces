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
      ll n,id=-1,idd=-1;
      cin>>n;
      vector<ll> a(n);
      for(auto &x:a) cin>>x;
      unordered_map<ll,ll> f;
      for(ll i=n-2;i>=0;i--){
        if(a[i]>a[i+1]){
          id=i;
          break;
        }
      }
      if(id==-1){
        cout<<0<<"\n";
        continue;
      }
    //   cout<<id<<" ";
      for(ll i=0;i<=id;i++) f[a[i]]=1;
      for(ll i=n-1;i>=id;i--){
        if(f.find(a[i])!=f.end()){
          idd=i;
          break;
        }
      }
      for(ll i=id;i<=idd;i++) f[a[i]]=1;
      cout<<f.size()<<"\n";
    }
}