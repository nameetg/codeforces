//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f(ll n){
  ll res=0;
  while(n%2==0){
    res++;
    n/=2;
  }
  return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,ep=0,ip=0,ct=0;
      cin>>n;
      vector<ll>a(n);
      for(ll i=1;i<=n;i++){
        ll a;
        cin>>a;
        ep+=f(a);
      }
      if(ep>=n) {cout<<0<<"\n";continue;}
      ip=n-ep;
      if(n%2)n--;
      vector<ll> p;
      for(ll i=n;i>1;i-=2){
        p.push_back(f(i));
      }
      sort(p.begin(),p.end(),greater<ll>());
      for(ll i=0;i<p.size();i++){
        ip-=p[i];
        ct++;
        if(ip<=0) break;
      }
      if(ip>0)cout<<-1<<"\n";
      else cout<<ct<<"\n";
    }
}