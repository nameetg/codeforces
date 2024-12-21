//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,m,f;
      cin>>n>>m;
      vector<ll> a, b(m),br(m);
      for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(!i) {f=x;a.push_back(f);}
        if(x>f) a.push_back(x);
      }
      for(ll i=0;i<m;i++) cin>>b[i];
      sort(a.begin(),a.end());

      for(ll i=0;i<m;i++){
        ll ix= lower_bound(a.begin(),a.end(),b[i])-a.begin();
        if(!ix || ix>=a.size()) br[i]=1;
        else br[i]=a.size()-ix+1;
      }
      sort(br.begin(),br.end());
      for(ll k=1;k<=m;k++){
        ll sum=0;
        for(ll i=k-1;i<m;i+=k){
          sum += br[i];
        }
        cout<<sum<<" ";
      }
      cout<<endl;
    }
}