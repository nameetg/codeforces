//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      unordered_map<ll,ll> f;
      for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        f[a]++;
      }
      ll score=0;
      for(auto &a:f){
        score += a.second/2;
      }
      cout<<score<<endl;
    }
}