//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,m;
      cin>>n>>m;
      if(m>=2*n) cout<<"NO"<<endl;
      else{
        cout<<"YES"<<endl;
        for(ll i=0;i<2*n;i++){
          for(ll j=0;j<m;j++){
            cout<<(i+j)/2%n+1<<" ";
          }
          cout<<endl;
        }
        
      }
    }
}