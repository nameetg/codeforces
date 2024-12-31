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
      ll n;
      cin>>n;
      bool fg=false;
      while(1){
        if(n%11==0){fg=true;break;}
        n-=111;
        if(n<0) break;
      }
      if(fg) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}