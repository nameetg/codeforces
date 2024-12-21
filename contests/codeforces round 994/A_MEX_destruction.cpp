//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool zeroes(vector<ll> &a){
  for(ll i=0;i<a.size();i++){
    if(!a[i]) return true;
  }
  return false;
} 

int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,s=-1,e=-1;
      cin>>n;
      vector<ll> a(n),b;
      for(ll i=0;i<n;i++) cin>>a[i];

      for(ll i=0;i<n;i++){
        if(a[i]){
          s=i;
          break;
        }
      }
      for(ll i=n-1;i>=0;i--){
        if(a[i]){
          e=i;break;
        }
      }
      if(s==-1) cout<<0<<endl;
      else{
        for(ll i=s;i<=e;i++) b.push_back(a[i]);
        if(!zeroes(b)) cout<<1<<endl;
        else cout<<2<<endl;
      }
    }
}