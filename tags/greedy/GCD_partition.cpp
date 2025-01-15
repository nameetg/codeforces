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
      ll n,A=0;
      cin>>n;
      vector<ll> a(n);
      for(auto &x:a){
        cin>>x;
        A+=x;
      }
      ll res=1,sum=0;
      for(ll i=0;i<n-1;i++){
        sum+=a[i];
        res=max(res,gcd(sum,A-sum));
      }
      cout<<res<<"\n";
    }
}