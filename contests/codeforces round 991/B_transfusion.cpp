// B. TRANSFUSION
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      ll A=0,eA=0,oA=0,oc=0,ec=0;
      for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        A+=a;
        if(i%2){ oA+=a;oc++;}
        else {eA+=a;ec++;}
      }
      if(eA%ec==0&&oA%oc==0&&oA/oc==eA/ec) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}