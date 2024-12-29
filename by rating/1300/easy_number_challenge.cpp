//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll M =1073741824;

ll cal(ll n){
  ll res =0;
  for(ll i=1;i<=sqrt(n);i++){
    if(n%i==0){
      res++;
      if(i!=n/i) res++; 
    }
  }
  return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a,b,c,ans=0;
    cin>>a>>b>>c;
    unordered_map<ll,ll> f;
    for(ll i=1;i<=a;i++){
      for(ll j=1;j<=b;j++){
        for(ll k=1;k<=c;k++){
          if(f[i*j*k]) ans =( ans%M+f[i*j*k]%M)%M;
          else{
            f[i*j*k]=cal(i*j*k);
            ans = (ans%M+f[i*j*k]%M)%M;
          }
        }
      }
    }
    cout<<ans<<endl;
}