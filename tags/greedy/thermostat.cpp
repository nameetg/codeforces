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
      ll l,r,x,a,b;
      cin>>l>>r>>x>>a>>b;
      if(a==b) cout<<0;
      else if(abs(a-b)>=x) cout<<1;
      else{
        if(a>b) swap(a,b);
        if(a-l>=x||r-b>=x) cout<<2;
        else if((a+x>r&&a-x<l)||(b-x<l&&b+x>r)) cout<<-1;
        else cout<<3;
      }
      cout<<"\n";
    }
}