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
      ll n,k;
      cin>>n>>k;
      string s;
      cin>>s;
      ll fi=-1,li=-1;
      for(ll i=0;i<n;i++){
        if(s[i]=='1'){
          fi=i;
          break;
        }
      }
      for(ll i=n-1;i>=0;i--){
        if(s[i]=='1'){
          li=i;
          break;
        }
      }
      if(fi==-1&&li==-1) cout<<0<<"\n";
      else if(fi==li){
        ll ld=n-1-li, fd=fi;
        if(k>=ld) cout<<1<<"\n";
        else if(k>=fd) cout<<10<<"\n";
        else cout<<11<<"\n";
      }else{
        ll ld=n-1-li,fd=fi;
        if(k>=ld){
          s[li]='0';
          s[n-1]='1';
          k-=ld;
          if(k>=fd){
            s[fi]='0';
            s[0]='1';
          }
        }else{
          if(k>=fd){
            s[fi]='0';
            s[0]='1';
          }
        }
        ll sum=0;
        for(ll i=0;i<n-1;i++){
          ll x=s[i]=='1', y=s[i+1]=='1';
          sum+=(x*10+y);
        }
        cout<<sum<<"\n";
      }
    }
}