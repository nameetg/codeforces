//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,sum=0;
      cin>>n;
      vector<ll> a(n),b(n);
      for(ll i=0;i<n;i++) cin>>a[i];
      for(ll i=0;i<n;i++){
        cin>>b[i];
        sum+=max(a[i],b[i]);
      }
      ll tsum=sum;
      sum += min(a[0],b[0]);
      for(ll i=1;i<n;i++){
        sum =max(sum,tsum+min(a[i],b[i]));
      }
      // if(n==1) cout<<a[0]+b[0]<<endl;
      cout<<sum<<endl;
    }
}