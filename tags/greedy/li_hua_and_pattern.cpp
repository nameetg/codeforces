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
      ll n,k,c=0;
      cin>>n>>k;
      vector<vector<ll>> a(n,vector<ll>(n,0));
      for(auto &x:a){
        for(auto &y:x) cin>>y;
      }
      // if(n==1){ cout<<"YES\n";continue;}
      for(ll i=0;i<n/2;i++){
        for(ll j=0;j<n;j++){
          if(a[i][j]!=a[n-i-1][n-j-1]) c++;
        }
      }
      if(n%2){
        for(ll i=0;i<n/2;i++){
          if(a[n/2][i]!=a[n/2][n-i-1]) c++;
        }
      }
      if(c>k) cout<<"NO\n";
      else if(c==k) cout<<"YES\n";
      else{
        if(n%2) cout<<"YES\n";
        else{
          if((k-c)%2) cout<<"NO\n";
          else cout<<"YES\n";
        }
      }
    }
}