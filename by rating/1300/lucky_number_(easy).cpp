//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> a;

void dfs(ll n, ll f, ll s, ll i){
  if(i>1e11) return;
  if(n<=i && f==s) a.push_back(i);
  i*=10;
  dfs(n,f+1,s,i+4);
  dfs(n,f,s+1,i+7);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    dfs(n,0,0,0);
    sort(a.begin(),a.end());
    cout<<a[0]<<endl;
    return 0;
}