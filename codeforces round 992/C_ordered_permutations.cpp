// C. ORDERED PERMUTATIONS
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,k;
      cin>>n>>k;
      if(k>pow(2,min(n-1,40*1ll))) cout<<-1<<endl;
      else{
        vector<ll> a(n);
        ll s=0,e=n-1;
        // ll t=pow(2,n-1);
        for(ll c=1;c<=n;c++){
          ll t=pow(2, min(n-c-1,40*1ll));
          if(k>t){
            a[e]=c;
            k-=pow(2,n-c-1);
            e--;
          }else{
            a[s]=c;
            s++;
          }
        }
        for(ll &e:a) cout<<e<<" ";
        cout<<endl;
      }
    }
}