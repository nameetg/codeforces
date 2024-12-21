// D. HARDER PROBLEM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,mx=-1;
      cin>>n;
      vector<ll> a(n),ans;
      unordered_map<ll,ll> f;
      for(ll i=0;i<n;i++){
        cin>>a[i];
        mx = max(mx,a[i]);
        if(!f[a[i]]) ans.push_back(a[i]);
        f[a[i]]++;
      }

      int i=1;
      while(ans.size()<n && i<=n){
        if(!f[i]) ans.push_back(i);
        i++;
      }

      for(ll i=0;i<n;i++) cout<<ans[i]<<" ";
      cout<<endl;
    }
}