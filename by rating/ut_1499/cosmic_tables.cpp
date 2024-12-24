//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m,k;
    cin>>n>>m>>k;
    vector<vector<ll>> a(n,vector<ll>(m,0));
    for(ll i=0;i<n;i++){
      for(ll j=0;j<m;j++) cin>>a[i][j];
    }
    unordered_map<ll,ll> r,c;
    for(ll i=0;i<n;i++) r[i]=i;
    for(ll i=0;i<m;i++) c[i]=i;
    while(k--){
      char ch;
      cin>>ch;
      ll x,y;
      cin>>x>>y;
      x--,y--;
      if(ch=='c') swap(c[x],c[y]);
      else if(ch=='r') swap(r[x],r[y]);
      else cout<<a[r[x]][c[y]]<<endl;
    }
}