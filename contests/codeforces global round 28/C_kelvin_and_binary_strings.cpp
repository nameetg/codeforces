//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool noZero(string &s, ll &ind){
  for(ll i=0;i<s.length();i++){
    if(s[i]=='0'){ind=i; return false;}
  }
  return true;
}                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      string s;
      cin>>s;
      ll zi=-1;
      cout<<1<<" "<<s.length()<<" ";
      if(noZero(s,zi)) cout<<1<<" "<<1<<endl;
      else{
        ll mx=-1,l=-1,r=-1, ln=s.length()-zi;
        for(ll i=0;i<zi;i++){
          ll sum=0,ii=zi;
          for(ll j=i;j<ln+i;j++){
            if(s[j]!=s[ii]) sum++;
            else break;
            ii++;
          }
          if(sum==ln){
            l=i, r=ln-1+i;
            break;
          }else if(sum>mx){
            l=i;r=ln-1+i;
            mx=sum;
          }
        }
        
        cout<<l+1<<" "<<r+1<<endl;
      }
    }
}