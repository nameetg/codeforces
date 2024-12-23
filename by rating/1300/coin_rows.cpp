//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,A=0;
      cin>>n;
      vector<ll> a(n),b(n);
      for(auto& x:a){
        cin>>x;
        A+=x;
      }
      ll res=1e9,B=0;
      for(ll i=0;i<n;i++){
        A-=a[i];
        res =min(res,max(A,B));
        cin>>b[i];
        B+=b[i];
      }
      cout<<res<<endl;
    }
}