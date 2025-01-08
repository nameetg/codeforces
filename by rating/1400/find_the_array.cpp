//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,A=0;
      cin>>n;
      vector<ll> a(n);
      for(ll i=0;i<n;i++){
        cin>>a[i];
        A+=a[i];
      }
      // ll eo[2]={0,0};
      vector<ll> eo(2,0);
      for(ll i=0;i<n;i++){
        eo[i%2]+=a[i]-1;
      }
      for(ll i=0;i<=1;i++){
        if(2*eo[i]>A) continue;
        for(ll j=i;j<n;j+=2){
          a[j]=1;
        }
        break;
      }
      for(auto &x:a) cout<<x<<" ";
      cout<<endl;
    }
}