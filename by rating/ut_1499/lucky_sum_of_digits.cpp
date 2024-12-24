//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    // cin>>t;
    while(t--) {
      ll n,fs=0,ss=0;
      cin>>n;
      while(n>0){
        if(n%7==0){ss=n/7;n=0;break;}
        fs++;
        n-=4;
      }
      if(!n){
        while(fs--)cout<<4;
        while(ss--) cout<<7;
      }else cout<<-1;
    }
}