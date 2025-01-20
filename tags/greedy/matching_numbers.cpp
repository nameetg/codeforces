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
      if(n%2){
        cout<<"YES\n";
        // ll ms=2*n+n/2+1;
        ll e=2*n, s=n/2+1;
        while(s<e){
          cout<<s<<" "<<e<<"\n";
          s++,e-=2;
        }
        e=2*n-1,s=1;
        while(s<=n/2){
          cout<<s<<" "<<e<<"\n";
          s++,e-=2;
        }
      }else cout<<"NO\n";
    }
}