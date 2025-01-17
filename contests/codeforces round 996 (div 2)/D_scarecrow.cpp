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
      ll n,k,l;
      cin>>n>>k>>l;
      vector<ll> a(n);
      for(auto &x:a){
        cin>>x;
        x=x*2;
      }
      k=k*2,l=l*2;
      ll res=a[0],d=k;
      for(ll i=1;i<n;i++){
        if(d>=l) break;
        else if(a[i]<=d){
          if(a[i]==d) d+=k;
          else{
            a[i]+=res;
            if(a[i]>=d) d+=k;
            else if(d-a[i]<=k) d=a[i]+k;
            else{
              if(i==n-1){
                res+=(l-d);
              }else{
                ll dd=(a[i+1]-d)/2;
                d+=(dd+k);
                res+=dd;
              }
            }
          }
        }else{
          a[i]-=res;
          if(a[i]<=d) d+=k;
          else{
            ll dd=(a[i]-d)/2;
            d+=(dd+k);
            res+=dd;
          }
        }
      }
      if(d<l) res+=(l-d);
      cout<<res<<"\n";
    }
}