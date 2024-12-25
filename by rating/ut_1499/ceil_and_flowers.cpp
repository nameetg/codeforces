//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll fs(ll r, ll g, ll b){
  ll mn =min(r,min(g,b));
  ll ans=mn;
  if(r==mn){
    g-=mn,b-=mn;
    ans = ans + g/3 +b/3;
  }else if(g==mn){
    r-=mn,b-=mn;
    ans = ans + r/3+b/3;
  }else if(b==mn){
    r-=mn,g-=mn;
    ans=ans+r/3+g/3;
  }
  return ans;
}

ll gs(ll r, ll g, ll b){
  ll mn = min(r,min(g,b));
  ll ans=0;
  if(mn==r){
    while(g>r && g>=3){ans++;g-=3;}
    while(b>r && b>=3){ans++;b-=3;}
  }else if(mn==g){
    while(r>g && r>=3){ans++;r-=3;}
    while(b>g && b>=3){ans++;b-=3;}
  }else if(mn==b){
    while(r>b && r>=3){ans++;r-=3;}
    while(g>b && g>=3){ans++;g-=3;}
  }
  return ans + fs(r,g,b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    // cin>>t;
    while(t--) {
      ll r,g,b;
      cin>>r>>g>>b;
      cout<<max(fs(r,g,b),gs(r,g,b))<<endl;
    }
}