//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      vector<ll> a;
      while(n){
        a.push_back(n%10);
        n/=10;
      }
      reverse(a.begin(),a.end());
      ll s=0, e=0;
      bool fg=0;
      for(ll i=0;i<a.size();i++){
        if(a[i]%2){
          if(fg){
            s=s*10+a[i]/2;
            e=e*10+(a[i]/2+1);
          }else{
            s=s*10+(a[i]/2+1);
            e=e*10+a[i]/2;
          }
          fg=!fg;
        }else{
          s=s*10+a[i]/2;
          e=e*10+a[i]/2;
        }
      }
      cout<<s<<" "<<e<<"\n";
    }
}