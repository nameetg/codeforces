// G1. MEDIUM DEMON PROBLEM(EASY VERSION)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      vector<ll> r(n+1),d(n+1),v(n+1);
      for(ll i=1;i<=n;i++){
        cin>>r[i];
        d[r[i]]++;
      }
      queue<ll> q;
      for(ll i=1;i<=n;i++){
        if(!d[i]){
          q.push(i);
          v[i]=1;
        }
      }

      while(q.size()){
        ll f = q.front();
        q.pop();
        d[r[f]]--;
        if(!d[r[f]]){
          q.push(r[f]);
          v[r[f]]=v[f]+1;
        }
      }
      ll ans=0;
      for(ll i=1;i<=n;i++) {if(d[i]==0)ans=max(ans,v[i]);}
      cout<<ans+2<<endl;
    }
}