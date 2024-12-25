//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f(ll n){
  ll res=1;
  for(ll i=2;i<=n;i++) res*=i;
  return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,d;
      cin>>n>>d;
      cout<<1<<" ";
      if(n>=3 || d%3==0) cout<<3<<" ";
      if(d==5) cout<<5<<" ";
      if(n>=3||d%7==0) cout<<7<<" ";
      if((n>=6 || d%9==0)||(n>=3&&d%3==0)) cout<<9;
      cout<<endl;
    }
}