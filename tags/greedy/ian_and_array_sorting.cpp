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
      for(auto &x:a) cin>>x;
      if(n%2) cout<<"YES\n";
      else{
        for(ll i=1;i<n-1;i++){
          ll d=a[i]-a[0];
          a[i]-=d;
          a[i+1]-=d;
        }
        if(a[n-2]<=a[n-1]) cout<<"YES\n";
        else cout<<"NO\n";
      }
    }
}