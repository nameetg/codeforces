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
      ll n,fg=0;
      cin>>n;
      vector<ll> a(n),d(n);
      for(auto &x:d) cin>>x;
      a[0]=d[0];
      for(ll i=1;i<n;i++){
        if(!d[i]) a[i]=a[i-1];
        else{
          if(a[i-1]-d[i]>=0){
            fg=1;
            break;
          }else a[i]=a[i-1]+d[i];
        }
      }
      if(fg) cout<<-1<<"\n";
      else{
        for(auto &x:a) cout<<x<<" ";
        cout<<"\n";
      }
    }
}