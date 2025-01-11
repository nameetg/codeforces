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
      string s;
      cin>>s;
      vector<ll> a;
      for(ll i=0;i<s.length();i++) a.push_back(s[i]-'0');
      for(ll i=1;i<a.size();i++){
        ll ci=i;
        while(ci>=1&&a[ci]>1&&a[ci]-1>a[ci-1]){
          ll d=a[ci];
          a[ci]=a[ci-1];
          a[ci-1]=d-1;
          ci--;
        }
      }
      for(auto &x:a) cout<<x;
      cout<<"\n";
    }
}