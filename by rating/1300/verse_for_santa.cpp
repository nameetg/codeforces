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
      ll n,s,A=0;
      cin>>n>>s;
      vector<ll> a(n);
      for(auto &x:a){
        cin>>x;
        A+=x;
      }
      if(A<=s) {cout<<0<<endl;continue;}
      ll si=-1;
      for(ll i=0;i<n;i++){
        s-=a[i];
        if(s<0){
          si=i;
          break;
        }
      }
      ll ans=-1,mx=-1;
      for(ll i=0;i<=si;i++){
        if(a[i]>mx){
          mx=a[i];
          ans=i;
        }
      }
      cout<<ans+1<<endl;
    }
}