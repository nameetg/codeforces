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
      ll n,sc=0;
      cin>>n;
      string s;
      cin>>s;
      for(ll i=0;i<n;i++){
        if(s[i]=='*') sc++;
      }
      if(sc%2) sc=sc/2+1;
      else sc=sc/2;
      ll si=-1,scc=0;
      for(ll i=0;i<s.length();i++){
        if(s[i]=='*') scc++;
        if(scc==sc){
          si=i;
          break;
        }
      }
      ll l=si-1,r=si+1,res=0;
      for(ll i=l;i>=0;i--){
        if(s[i]=='*'){
          res+=(l-i);
          l--;
        }
      }
      for(ll i=r;i<s.length();i++){
        if(s[i]=='*'){
          res+=(i-r);
          r++;
        }
      }
      cout<<res<<endl;
    }
}