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
      ll A=0,o=0;
      ll a;
      cin>>a;
      cout<<a<<" ";
      A+=a;
      o+=(a%2);
      for(ll i=1;i<n;i++){
        ll x;
        cin>>x;
        A+=x;
        if(x%2) o++;
        if(o%3==1) cout<<A-o/3-1<<" ";
        else cout<<A-o/3<<" ";
      }
      cout<<"\n";
    }
}