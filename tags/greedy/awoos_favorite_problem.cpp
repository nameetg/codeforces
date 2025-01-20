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
      ll n;
      cin>>n;
      string a,b;
      cin>>a>>b;
      bool fg=1;
      for(ll i=0;i<n;i++){
        if(a[i]==b[i]) continue;
        else if(a[i]=='a'&&b[i]=='b'){
          ll j=i;
          while(j<n&&a[j]=='a')j++;
          if(j<n){
            if(a[j]=='b') swap(a[i],a[j]);
            else{
              fg=0;
              break;
            }
          }
          else{
            fg=0;
            break;
          }
        }else if(a[i]=='b'&&b[i]=='c'){
          ll j=i;
          while(j<n&&a[j]=='b') j++;
          if(j<n){
            if(a[j]=='c') swap(a[i],a[j]);
            else{
              fg=0;
              break;
            }
          }else{
            fg=0;
            break;
          }
        }else{
          fg=0;
          break;
        }
      }
      if(fg) cout<<"YES\n";
      else cout<<"NO\n";
    }
}