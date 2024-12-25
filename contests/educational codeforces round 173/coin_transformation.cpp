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
      ll n,ans=1;
      cin>>n;
      while(n>3){
        ans=ans*2;
        n/=4;
      }
      cout<<ans<<endl;
    }
}