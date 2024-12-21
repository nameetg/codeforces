// C. UNINTERESTING NUMBER
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      string s;
      cin>>s;
      ll t2s=0, t3s=0, sum=0;
      for(ll i=0;i<s.length();i++){
        sum = sum + s[i]-'0';
        t2s = t2s + (s[i]=='2');
        t3s = t3s + (s[i]=='3');
      }
      sum%=9;
      if(t2s>9) cout<<"YES"<<endl;
      else{
        bool flag=false;
        for(ll i=0;i<=t2s;i++){
          for(ll j=0;j<=t3s;j++){
            if((sum+i*2+j*6)%9==0){
              flag =true;
              break;
            }
          }
          if(flag) break;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
      }
    }
}