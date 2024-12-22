//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    ll M=1e9+7;
    while(t--) {
      ll n,k,ans=1;
      cin>>n>>k;
      for(ll i=0;i<k;i++) ans=(ans*n)%M;
      cout<<ans<<endl;
    }
}