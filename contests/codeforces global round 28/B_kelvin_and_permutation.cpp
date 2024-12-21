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
      if(k==1 || k==n){
        while(n){
          cout<<n<<" ";
          n--;
        }
        cout<<endl;
      }
      else{
        ll s=n,e=1;
        while(n>0){
          for(ll i=1;i<=min(k,n);i++){
            if(i==k){
              cout<<e<<" ";
              e++;
            }else{
              cout<<s<<" ";
              s--;
            }
          }
          n-=k;
        }
        cout<<endl;
      }
    }
}