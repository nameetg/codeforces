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
      vector<ll> a(n);
      bool fg=1,zsum=0;
      ll sum=0;
      for(auto &x:a){
        cin>>x;
        sum+=x;
        if(!sum) zsum=1;
        if(sum<0) fg=0;
        else if(sum&&zsum) fg=0;
      }
      if(sum) fg=0;
      if(fg)cout<<"YES\n";
      else cout<<"NO\n";
    }
}