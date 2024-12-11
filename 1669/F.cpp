#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll> w(n);
    for(ll i=0;i<n;i++) cin>>w[i];
    ll s=0, e=n-1;
    ll alSum=0, boSum=0;
    unordered_map<ll,ll> f;
    ll ans =0;
    while(s<e){
      if(!f[s]) {alSum += w[s];f[s]++;}
      if(!f[e]) {boSum += w[e];f[e]++;}
      if(alSum==boSum){
        ll cetn = s+1+n-e;
        ans = max(ans,cetn);
        s++;
        e--;
      }
      else if(alSum > boSum) e--;
      else s++;
    }
    cout<<ans<<endl;
  }
}