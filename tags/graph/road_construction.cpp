//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n+1);
    while(m--){
      ll u,v;
      cin>>u>>v;
      a[u]++,a[v]++;
    }
    ll f=-1;
    for(ll i=1;i<=n;i++){
      if(!a[i]){
        f=i;
        break;
      }
    }
    cout<<n-1<<"\n";
    for(ll i=1;i<=n;i++){
      if(i==f) continue;
      cout<<f<<" "<<i<<"\n";
    }
}