// F. EASY DEMON PROBLEM
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool found(vector<ll> &a, vector<ll> &b, ll p, ll q){
  return *lower_bound(a.begin(),a.end(),p)==p && *lower_bound(b.begin(),b.end(),q)==q;
}

int main() {
    ll n,m,q, A=0, B=0;
    cin>>n>>m>>q;
    vector<ll> a(n),b(m);
    for(ll i=0;i<n;i++) {cin>>a[i];A+=a[i];}
    for(ll i=0;i<m;i++) {cin>>b[i];B+=b[i];}
    for(ll i=0;i<n;i++) a[i]=A-a[i];
    for(ll i=0;i<m;i++) b[i]=B-b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for(ll i=0;i<q;i++) {
      ll x;
      cin>>x;
      bool c=0, pv=x>=0;
      x =abs(x);
      for(ll i=1;i*i<=x;i++){
        if(x%i==0){
          ll p=i, q=x/i;
          if(pv){
            if(found(a,b,p,q)||found(a,b,-p,-q)){
              c=1;
              break;
            }
          }else{
            if(found(a,b,-p,q)||found(a,b,p,-q)){
              c=1;
              break;
            }
          }
          swap(p,q);
          if(pv){
            if(found(a,b,p,q)||found(a,b,-p,-q)){
              c=1;
              break;
            }
          }else{
            if(found(a,b,-p,q)||found(a,b,p,-q)){
              c=1;
              break;
            }
          }
        }
      }
      if(c) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    
}