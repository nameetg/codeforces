//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    ll M=32768;
    while(t--) {
      ll n;
      cin>>n;
      ll res=30;
      for(ll i=0;i<=15;i++){
        for(ll j=0;j<=15;j++){
            ll num=(i+n)*pow(2,j);
            if(num%M==0) res=min(res,i+j);
        }
      }
      cout<<res<<" ";
    }
}