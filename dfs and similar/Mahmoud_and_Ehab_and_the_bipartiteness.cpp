//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n;
set<ll> a,b;
unordered_map<ll,vector<ll>> f;
unordered_map<ll,ll> v;
void dfs(ll n, bool st){
    v[n]=1;
    if(st) a.insert(n);
    else b.insert(n);

    for(ll i=0;i<f[n].size();i++){
        if(!v[f[n][i]]){
            dfs(f[n][i],!st);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    for(ll i=0;i<n;i++){
        ll u,v;
        cin>>u>>v;
        f[u].push_back(v);
        f[v].push_back(u);
    }
    for(ll i=0;i<n;i++){
        if(!v[i+1]) dfs(i+1,1);
    }
    ll A=a.size(), B=b.size();
    cout<<A*B-n+1<<endl;
}