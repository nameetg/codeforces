//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,mn=INT_MAX,fi=-1,si=-1;
      cin>>n;
      vector<ll> h(n);
      for(ll i=0;i<n;i++) cin>>h[i];
      if(n==2){cout<<min(h[0],h[1])<<" "<<max(h[0],h[1])<<endl;continue;}
      sort(h.begin(),h.end());
      for(ll i=1;i<n;i++){
        if(h[i]-h[i-1]<mn){
          mn =h[i]-h[i-1];
          fi=i-1;si=i;
        }
      }
      for(ll i=si;i<n;i++) cout<<h[i]<<" ";
      for(ll i=0;i<=fi;i++) cout<<h[i]<<" ";
      cout<<endl;
    }
}