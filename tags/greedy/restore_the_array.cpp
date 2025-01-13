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
      vector<ll> b(n-1);
      for(auto &x:b) cin>>x;
      cout<<b[0]<<" ";
      for(ll i=0;i<b.size()-1;i++) cout<<min(b[i],b[i+1])<<" ";
      cout<<b[n-2]<<"\n";
    }
}