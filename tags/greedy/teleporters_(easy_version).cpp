//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,c,cm=1;
      cin>>n>>c;
      vector<ll> a(n);
      for(ll i=0;i<n;i++){
        cin>>a[i];
        a[i]+=cm;
        cm++;
      }
      sort(a.begin(),a.end());
      ll res=-1;
      for(ll i=0;i<n;i++){
        c-=a[i];
        if(c<0){
          res=i;
          break;
        }
      }
      if(res==-1) cout<<n<<"\n";
      else cout<<res<<"\n";
    }
}