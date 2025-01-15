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
      ll n,A=0,c=0,mn=INT_MAX;
      cin>>n;
      vector<ll> a(n);
      for(auto &x:a){
        cin>>x;
        if(x<0) c++;
        A+=abs(x);
        mn=min(mn,abs(x));
      }
      if(c%2) A-=2*mn;
      cout<<A<<"\n";
    }
}