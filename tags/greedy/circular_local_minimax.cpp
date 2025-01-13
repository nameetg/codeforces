//CODEFORCES ROUND 996 (DIV. 2)
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
      if(n%2) cout<<"NO\n";
      else{
        sort(a.begin(),a.end());
        vector<ll> b;
        for(ll i=0;i<n/2;i++) {
          b.push_back(a[i]);
          b.push_back(a[i+n/2]);
        }
        bool fg=1;
        for(ll i=1;i<n-1;i++){
          if(b[i]>b[i-1]&&b[i]>b[i+1]) continue;
          else if(b[i]<b[i-1]&&b[i]<b[i+1]) continue;
          else{
            fg=0;
            break;
          }
        }
        // if(!(a[0]>a[1]&&a[0]>a[n-1])||!(a[0]<a[1]&&a[0]<a[n-1])) fg=0;
        // if(!(a[n-1]>a[n-2]&&a[n-1]>a[0])||!(a[n-1]<a[n-2]&&a[n-1]<a[0])) fg=0;
        if(!fg) cout<<"NO\n";
        else{
          cout<<"YES\n";
          for(auto &x:b) cout<<x<<" ";
          cout<<"\n";
        }
      }
    }
}