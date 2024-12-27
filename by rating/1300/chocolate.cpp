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
      ll n,A=0;
      cin>>n;
      bool fg=0;
      vector<ll> a;
      for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x) fg=1;
        if(fg) a.push_back(x);
        A+=x;
      }
      if(A==1) cout<<1<<endl;
      else if(!A) cout<<0<<endl;
      else{
        while(!a[a.size()-1]) a.pop_back();
        ll res=1,zc=0;
        for(ll i=1;i<a.size();i++){
          if(a[i]){ res = res*(zc+1);zc=0;}
          else zc++;
        }
        cout<<res<<endl;
      }
    }
}