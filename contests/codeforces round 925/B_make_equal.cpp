//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,A=0;
      cin>>n;
      vector<ll> a(n);
      for(ll i=0;i<n;i++){
        cin>>a[i];
        A +=a[i];
      }
      bool flag=true;
      ll x=A/n,r=0;
      for(ll i=0;i<n;i++){
        if(a[i]<x){
          ll nd=x-a[i];
          if(r<nd){
            flag=false;
            break;
          }
          a[i]+=nd;
          r-=nd;
        }
        else r+=a[i]-x;
      }
      if(flag)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}