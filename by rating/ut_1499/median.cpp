//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    // cin>>t;
    while(t--) {
      ll n,x;
      cin>>n>>x;
      bool fg=0;
      vector<ll> a(n);
      for(auto &e:a){
        cin>>e;
        if(e==x) fg=1;
      }
      ll ans=0;
      if(!fg) {a.push_back(x);ans++;}
      sort(a.begin(),a.end());
      ll m = (a.size()-1)/2;
      if(a[m]==x){ cout<<ans<<endl;}
      else if(a[m]>x){
        reverse(a.begin(),a.end());
        while(1){
          a.push_back(1);
          ans++;
          ll m1 = (a.size()-1)/2;
          if(a[a.size()-m1-1]==x){
            cout<<ans<<endl;
            break;
          }
        }
      }else{
        while(1){
          a.push_back(1);
          ans++;
          ll m1 = (a.size()-1)/2;
          if(a[m1]==x){
            cout<<ans<<endl;
            break;
          }
        }
      }
    }
}