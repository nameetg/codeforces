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
      ll a,b,c,d;
      cin>>a>>b>>c>>d;
      if(!a&&!b&&!c&&!d){ cout<<0<<"\n";continue;}
      else if(!a){ cout<<1<<"\n";continue;}
      ll res=a;
      if(b>c) swap(b,c);
      res+=(2*b);
      c-=b;
      b-=b;
      if(d+c>a) res+=(a+1);
      else res+=(d+c);
      cout<<res<<"\n";
    }
}