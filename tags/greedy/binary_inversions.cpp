//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f(vector<ll> &a){
  ll zc=0,res=0;
  for(ll i=a.size()-1;i>=0;i--){
    if(!a[i]) zc++;
    else res+=zc;
  }
  return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      vector<ll> a(n);
      for(auto &x:a) cin>>x;
      ll oa=f(a);
      ll fz=-1,lo=-1;
      for(ll i=0;i<n;i++){
        if(!a[i]){
          fz=i;
          break;
        }
      }
      for(ll i=a.size()-1;i>=0;i--){
        if(a[i]){
          lo=i;
          break;
        }
      }
      if(fz!=-1)a[fz]=1;
      ll za=f(a);
      if(fz!=-1)a[fz]=0;
      if(lo!=-1) a[lo]=0;
      ll oaa=f(a);
      cout<<max(oaa,max(za,oa))<<"\n";
    }
}