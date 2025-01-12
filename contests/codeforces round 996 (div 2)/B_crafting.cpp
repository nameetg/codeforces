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
      ll n,A=0,B=0,dc=0;
      cin>>n;
      vector<ll> a(n),b(n),c(n);
      for(auto &x:a){
        cin>>x;
        A+=x;
      }
      for(auto &x:b){
        cin>>x;
        B+=x;
      }
      for(ll i=0;i<n;i++){
        if(a[i]<b[i]) dc++;
      }
      if(!dc) cout<<"YES\n";
      else if(dc==1){
        ll ld=-1, hd=INT_MAX;
        for(ll i=0;i<n;i++){
            if(a[i]<b[i]) ld=b[i]-a[i];
            else hd=min(hd,a[i]-b[i]);
        }
        if(ld>hd) cout<<"NO\n";
        else cout<<"YES\n";
      }else cout<<"NO\n";
    }
}