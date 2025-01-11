//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool f(ll a, ll b, ll c){
  return (a+b>c)&&(a+c>b)&&(b+c>a);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,ct=0;
    cin>>n;
    for(ll i=1;i<=n;i++){
      for(ll j=i+1;j<=n;j++){
        for(ll k=j+1;k<=n;k++){
          ll xr =i^j^k;
          if(!xr&&f(i,j,k)) {ct++;} 
        }
      }
    }
    cout<<ct<<"\n";
    return 0;
}