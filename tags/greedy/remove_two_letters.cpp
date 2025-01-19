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
      ll n,ct=0;
      cin>>n;
      string s;
      cin>>s;
      for(ll i=0;i<n-2;i++){
        if(s[i]==s[i+2]) ct++;
      }
      cout<<n-ct-1<<"\n";
    }
}