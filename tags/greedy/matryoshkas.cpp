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
      vector<ll> a(n);
      for(auto &x:a)cin>>x;
      sort(a.begin(),a.end());
      unordered_map<ll,vector<ll>> g;
      ll ct=1,le=a[0];
      g[ct].push_back(a[0]);
      for(ll i=1;i<n;i++){
        if(a[i]!=le) ct=1;
        else ct++;
        g[ct].push_back(a[i]);
        le=a[i];
      }
      ll res=0;
      for(auto &x:g){
        res++;
        for(ll i=1;i<x.second.size();i++){
          if(x.second[i]-x.second[i-1]>=2) res++;
        }
      }
      cout<<res<<"\n";
    }
}