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
      ll n,tt=0;
      cin>>n;
      string s;
      cin>>s;
      vector<ll> a(n);
      for(ll i=0;i<n;i++){
        if(s[i]=='L'){
          tt+=i;
          a[i]=n-1-i-i;
        }else{
          tt+=(n-1-i);
          a[i]=i-(n-1-i);
        }
      }
      sort(a.begin(),a.end());
      for(ll i=n-1;i>=0;i--){
        if(a[i]>0) tt+=a[i];
        cout<<tt<<" ";
      }
      cout<<"\n";
    }
}