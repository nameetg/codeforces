#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll ans =0;
    while(n>1){
      ll s=1, e=n;
      while(s<=e){
        ll m = (s+e)/2;
        ll cards = m*(3*m+1)/2;
        if(cards<=n) s=m+1;
        else e=m-1;
      }
      ans++;
      ll c = s-1;
      c = c*(3*c+1)/2;
      n= n-c;
    }
    cout<<ans<<endl;
  }
}