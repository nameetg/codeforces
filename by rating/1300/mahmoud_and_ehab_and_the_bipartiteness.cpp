//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    vector<ll> c(n+1,0);
    unordered_map<ll,vector<ll>> f;
    unordered_map<ll,ll> v;
    for(ll i=0;i<n-1;i++){
      ll x,y;
      cin>>x>>y;
      f[x].push_back(y);
      f[y].push_back(x);
    }
    queue<ll> q;
    q.push(1);
    v[1]++;
    c[1]=1;
    while(!q.empty()){
      ll e=q.front();
      q.pop();
      for(ll i=0;i<f[e].size();i++){
        c[f[e][i]]=c[e]==1?-1:1;
        if(!v[f[e][i]]){
          q.push(f[e][i]);
          v[f[e][i]]++;
        }
      }
    }
    ll a=0,b=0;
    for(auto&e:c){
      a+=(e==1);
      b+=(e==-1);
    }
    cout<<a*b-n+1<<endl;
}