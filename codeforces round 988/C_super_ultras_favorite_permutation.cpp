//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      if(n<=4) cout<<-1<<endl;
      else if(n==5) cout<<1<<" "<<3<<" "<<5<<" "<<4<<" "<<2<<endl;
      else if(n==6) cout<<1<<" "<<3<<" "<<5<<" "<<4<<" "<<2<<" "<<6<<endl;
      else{
        for(ll i=1;i<=n;i+=2){
          if(i==7) continue;
          cout<<i<<" ";
        }
        cout<<7<<" ";
        for(ll i=2;i<=n;i+=2) cout<<i<<" ";
        cout<<endl;
      }
    }
}