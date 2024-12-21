// A. LINE BREAKS
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,m;
      cin>>n>>m;
      ll l=0,ans=0;
      bool flag=1;
      for(ll i=0;i<n;i++){
        string s;
        cin>>s;
        if(l+s.length()<=m){
          if(flag) {ans++;l+=s.length();}
        }
        else flag=false;
      }
      cout<<ans<<endl;
    }
}