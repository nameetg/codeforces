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
      string s;
      cin>>s;
      vector<ll> a(n+1);
      for(ll i=1;i<=n;i++){
        a[i]=s[i-1]=='1';
      }
      ll res=0;
      for(ll i=1;i<=n;i++){
        for(ll j=i;j<=n;j+=i){
          if(a[j]<=0){
            if(a[j]==0){
              res+=i;
              a[j]=-1;
            }
          }else break;
        }
      }
      cout<<res<<"\n";
    }
}