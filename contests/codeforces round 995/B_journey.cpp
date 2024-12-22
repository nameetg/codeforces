//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,a,b,c;
      cin>>n>>a>>b>>c;
      ll tt=a+b+c;
      if(n%tt){
        ll lt=n%tt,ix=0;
        while(lt>0){
          if(ix%3==0) lt-=a;
          else if(ix%3==1) lt-=b;
          else if(ix%3==2) lt-=c;
          ix++;
        }
        cout<<(3*(n/tt))+ix<<endl;
      }else{
        cout<<3*(n/tt)<<endl;
      }
    }
}
