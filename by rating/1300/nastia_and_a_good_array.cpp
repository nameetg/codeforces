//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,xi=-1,mn=1e9+6;
      cin>>n;
      vector<ll> a(n);
      for(ll i=0;i<n;i++){ 
        cin>>a[i];
        if(a[i]<mn){
          mn=a[i];xi=i;
        }
      }
      cout<<n-1<<endl;
      for(ll i=0;i<n;i++){
        if(i==xi) continue;
        cout<<xi+1<<" "<<i+1<<" "<<mn<<" "<<mn+abs(xi-i)<<endl;
      }

    }
}