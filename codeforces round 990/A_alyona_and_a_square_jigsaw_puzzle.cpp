//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,res=0,A=0;
      cin>>n;
      for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        A+=a;
        ll x=sqrt(A);
        if(x*x==A && x%2) res++;
      }
      cout<<res<<endl;
    }
}