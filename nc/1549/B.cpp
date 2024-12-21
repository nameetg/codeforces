#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    string e,g;
    cin>>e>>g;
    unordered_map<ll,ll> f,s;
    if(g[0]=='1'){
      if(e[0]=='0') f[0]++;
      else if(e[1]=='1') f[1]++;
    }
    for(ll i=1;i<n-1;i++){
      if(g[i]=='1'){
        if(e[i]=='0') f[i]++;
        else if(e[i-1]=='1' && !f[i-1]) f[i-1]++;
        else if(e[i+1]=='1' && !f[i+1]) f[i+1]++;
      }
    }
    if(g[n-1]=='1'){
      if(e[n-1]=='0') f[n-1]++;
      else if(e[n-2]=='1' && !f[n-2]) f[n-2]++;
    }

    if(g[n-1]=='1'){
      if(e[n-1]=='0') s[n-1]++;
      else if(e[n-2]=='1') s[n-2]++;
    }
    for(ll i=n-2;i>0;i--){
      if(g[i]=='1'){
        if(e[i]=='0') s[i]++;
        else if(e[i+1]=='1' && !s[i+1]) s[i+1]++;
        else if(e[i-1]=='1' && !s[i-1]) s[i-1]++;
      }
    }
    if(g[0]=='1'){
      if(e[0]=='0') s[0]++;
      else if(e[1]=='1' && !s[1]) s[1]++;
    }
    cout<<max(f.size(),s.size())<<endl;
  }
}