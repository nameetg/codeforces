//PRACTICING
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
      vector<ll> p(n);
      for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        p[x-1]=i;
      }
      string s="";
      ll l=n,r=0;
      for(ll i=0;i<n;i++){
        r=max(r,p[i]);
        l=min(l,p[i]);
        if(r-l==i) s+='1';
        else s+='0';
      }
      cout<<s<<endl;
    }
}