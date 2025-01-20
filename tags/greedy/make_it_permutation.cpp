//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,c,d,cn=0;
      cin>>n>>c>>d;
      map<ll,ll> f;
      for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        f[a]++;
      }
      cn=c*(n-f.size());
      // cout<<f.size()<<"\n";
      ll res=LLONG_MAX,cnn=0;
      if(f.find(1)==f.end()){
        // res=min(res,d+(ll)(c*f.size())+cn);
        f[1]=1;
        cn+=d;
      }
      while(f.size()>0){
        auto it=*f.rbegin();
        ll dn=d*(it.first-f.size());
        res=min(res,dn+cnn);
        f.erase(it.first);
        cnn+=c;
      }
      cout<<res+cn<<"\n";
    }
}