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
      ll st,in,ex;
      cin>>st>>in>>ex;
      if(!ex){
        if(st>in) cout<<1<<endl;
        else cout<<0<<endl;
        continue;
      }
      ll s=0,e=ex;
      while(s<=e){
        ll m = (e+s)/2;
        ll rst=st+m, rin=in+(ex-m);
        if(st+m<=rin) s=m+1;
        else e=m-1;
      }
      cout<<ex-s+1<<endl;
    }
}