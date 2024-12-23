//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    // cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      vector<vector<ll>> a(n,vector<ll>(2,0));
      for(ll i=0;i<n;i++) cin>>a[i][0]>>a[i][1];
      vector<vector<ll>> b=a;
      sort(a.begin(),a.end());
      ll mn=a[0][0], mx=-1;
      for(ll i=0;i<n;i++){
        if(a[i][0]!=mn) break;
        mx =max(mx,a[i][1]);
      }
      bool fg=1;
      for(ll i=0;i<n;i++){
        if(mn<=a[i][0] && mx>=a[i][1]) continue;
        else{
          cout<<-1<<endl;
          fg=0;
          break;
        }
      }
      if(fg){
        for(ll i=0;i<n;i++){
          if(b[i][0]==mn&&b[i][1]==mx){cout<<i+1<<endl;break;}
        }
      }
    }
}