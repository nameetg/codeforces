//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>n>>m;
    if(!m) cout<<n<<" "<<n<<"\n";
    else{
      if(n-2*m<0) cout<<0;
      else cout<<n-2*m;
      cout<<" ";
      ll x=ceil((double)(1+sqrt(1+8*m))/(double)2);
      cout<<n-x<<"\n";
    }
}