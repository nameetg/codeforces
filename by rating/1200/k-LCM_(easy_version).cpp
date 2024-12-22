//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,k;
      cin>>n>>k;
      if(n%3==0) cout<<n/3<<" "<<n/3<<" "<<n/3<<endl;
      else {
        if(n%2==0){
          if(n%4) cout<<n/2-1<<" "<<n/2-1<<" "<<2<<endl;
          else cout<<n/4<<" "<<n/4<<" "<<n/2<<endl;
        }
        else cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
      }
    }
}