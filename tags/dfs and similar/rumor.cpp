//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void dfs(ll n, unordered_map<ll,vector<ll>> &f, unordered_map<ll,ll> &v){
    v[n]=1;
    for(ll i=0;i<f[n].size();i++){
        if(!v[f[n][i]]) dfs(f[n][i],f,v);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m,res=0;
    cin>>n>>m;
    vector<vector<ll>> c(n,vector<ll>(2,0));
    unordered_map<ll,vector<ll>> f;
    unordered_map<ll,ll> v;
    for(ll i=0;i<n;i++){
        cin>>c[i][0];
        c[i][1]=i+1;
    }
    for(ll i=0;i<m;i++){
        ll x,y;
        cin>>x>>y;
        f[x].push_back(y);
        f[y].push_back(x);
    }
    sort(c.begin(),c.end());
    for(ll i=0;i<n;i++){
        if(!v[c[i][1]]){res+=c[i][0];
        dfs(c[i][1],f,v);}
    }
    cout<<res<<endl;
}