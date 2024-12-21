//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,zc=0;
      cin>>n;
      string s;
      cin>>s;
      for(ll i=0;i<n;i++) zc+=(s[i]=='0');
      if(zc%2){
        if(zc==1) cout<<"BOB"<<endl;
        else cout<<"ALICE"<<endl;
      }else{
        if(!zc) cout<<"DRAW"<<endl;
        else cout<<"BOB"<<endl;
      }
    }
}