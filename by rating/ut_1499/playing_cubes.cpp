//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    // cin>>t;
    while(t--) {
      ll n,m;
      cin>>n>>m;
      ll mx=max(n,m),mn=min(n,m);
      cout<<mx-1<<" "<<mn<<endl;
    }
}