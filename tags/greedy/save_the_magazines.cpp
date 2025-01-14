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
      string l;
      cin>>l;
      for(auto &x:a) cin>>x;
      ll res=0,le=-1;
      for(ll i=0;i<n;i++){
        if(l[i]=='0') le=i;
        else{
          if(le>-1&&a[le]>a[i]){
            res+=a[le];
            le=i;
          }else res+=a[i];
        }
      }
      cout<<res<<"\n";
    }
}