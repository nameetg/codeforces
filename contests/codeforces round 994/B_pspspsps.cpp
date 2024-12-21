//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      string s;
      cin>>s;
      if(s[0]=='s') s[0]='.';
      if(s[n-1]=='p') s[n-1]='.';

      bool sc=0,pc=0;
      for(ll i=0;i<n;i++) {
        if(s[i]=='p') pc=1;
        else if(s[i]=='s') sc=1;
      }
      if(pc&&sc) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }
}