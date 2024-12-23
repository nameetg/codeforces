//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    // cin>>t;
    while(t--) {
      ll n,k;
      cin>>n>>k;
      vector<ll> a(n);
      for(auto &x:a) cin>>x;
      sort(a.begin(),a.end());
      ll tms=0,m=0;
      for(auto &x:a){
        if(x<=5-k) m++;
        if(m==3){tms++;m=0;}
      }
      cout<<tms<<endl;
    }
}