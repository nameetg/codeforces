//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool v(ll r, ll c, vector<string> &a){
  ll h=a.size(),w=a[0].size();
  if(r<0||c<0||r>=h||c>=w) return 0;
  return a[r][c]=='*';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll h,w;
    cin>>h>>w;
    vector<string> a(h);
    for(auto &s:a) cin>>s;
    ll r=-1,c=-1;
    for(ll i=0;i<h;i++){
      for(ll j=0;j<w;j++){
        if(a[i][j]=='*'){
          if(v(i+1,j,a)&&v(i-1,j,a)&&v(i,j+1,a)&&v(i,j-1,a)){
            r=i,c=j;
            break;
          }
        }
      }
      if(r!=-1&&c!=-1) break;
    }
    set<pair<ll,ll>> s;
    if(r!=-1&&c!=-1)s.insert({r,c});
    ll i=r-1;
    while(v(i,c,a)){
      s.insert({i,c});
      i--;
    }
    i=r+1;
    while(v(i,c,a)){
      s.insert({i,c});
      i++;
    }
    i=c-1;
    while(v(r,i,a)){
      s.insert({r,i});
      i--;
    }
    i=c+1;
    while(v(r,i,a)){
      s.insert({r,i});
      i++;
    }
    bool fg=1;
    for(ll i=0;i<h;i++){
      for(ll j=0;j<w;j++){
        pair<ll,ll> p={i,j};
        if(s.count(p)>0) continue;
        if(a[i][j]=='*'){
          fg=0;
          break;
        }
      }
      if(!fg) break;
    }
    if(s.size()<5) cout<<"NO\n";
    else if(fg) cout<<"YES\n";
    else if(!fg) cout<<"NO\n";
}