//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,k;
      cin>>n>>k;
      vector<ll> a(n);
      for(auto &x:a) cin>>x;
      sort(a.begin(),a.end());
      ll s=n-k-1,e=n-1,res=0;
      while(k--){
        res +=(a[s]/a[e]);
        s--,e--;
      }
      for(ll i=0;i<=s;i++) res +=a[i];
      cout<<res<<endl;
    }
}
