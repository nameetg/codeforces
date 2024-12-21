//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll k;
      cin>>k;
      unordered_map<ll,ll> f;
      for(ll i=0;i<k;i++){
        ll a;
        cin>>a;
        f[a]++;
      }
      ll a=k-2;
      for(ll i=1;i<=sqrt(a);i++){
        ll p=i,q=a/i;
        if(a%i==0&&f[p]&&f[q]){cout<<p<<" "<<q<<endl;break;}
      }
    }
}