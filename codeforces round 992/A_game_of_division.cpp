// A. GAME OF DIVISION

#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool wins(vector<ll> &a, ll k, ll &ans){
  for(ll i=0;i<a.size();i++){
    bool flag =true;
    for(ll j=0;j<a.size();j++){
      if(i!=j && abs(a[i]-a[j])%k==0){
        flag = false;
        break;
      }
    }
    if(flag){
      ans=i;
      return true;
    }
  }
  return false;
}

int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,k;
      cin>>n>>k;
      vector<ll> a(n);
      for(ll i=0;i<n;i++) cin>>a[i];
      ll ans=-1;
      if(wins(a,k,ans)){
        cout<<"YES"<<endl;
        cout<<ans+1<<endl;
      }
      else cout<<"NO"<<endl;
    }
}