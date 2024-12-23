//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,l,r;
      cin>>n>>l>>r;
      vector<ll> a(n);
      for(auto &x:a) cin>>x;
      sort(a.begin(),a.end());
      ll res =0;
      for(auto &x:a){
        ll lb =lower_bound(a.begin(),a.end(),l-x)-a.begin();
        ll ub =upper_bound(a.begin(),a.end(),r-x)-a.begin();
        res +=(ub-lb);
        if(l<=2*x && r>=2*x) res--;
      }
      cout<<res/2<<endl;
    }
}