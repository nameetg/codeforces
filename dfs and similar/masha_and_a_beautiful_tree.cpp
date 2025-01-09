//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> dfs(vector<ll> f, vector<ll> s, ll &ops){
  if(f.size()==1 &&s.size()==1){
    if(f>s){ops++; return {s[0],f[0]};}
    else return {f[0],s[0]};
  }
  ll m=f.size()/2;
  vector<ll> ff(f.begin(),f.begin()+m), ss(f.begin()+m,f.end());
  f=dfs(ff,ss,ops);
  ff.assign(s.begin(),s.begin()+m);
  ss.assign(s.begin()+m,s.end());
  s=dfs(ff,ss,ops);
  if(f>s){
    ops++;
    s.insert(s.end(),f.begin(),f.end());
    return s;
  }
  f.insert(f.end(),s.begin(),s.end());
  return f;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,ans=0;
      cin>>n;
      vector<ll> p(n);
      for(auto& x:p) cin>>x;
      if(n==1){ cout<<0<<endl;continue;}
      ll m=n/2;
      vector<ll> f(p.begin(),p.begin()+m), s(p.begin()+m,p.end());
      p=dfs(f,s,ans);
      bool fg=1;
      for(ll i=1;i<n;i++){
        if(p[i]<p[i-1]){
          fg=0;
          break;
        }
      }
      
      if(fg){
        cout<<ans<<endl;
      }else cout<<-1<<endl;
    }
}