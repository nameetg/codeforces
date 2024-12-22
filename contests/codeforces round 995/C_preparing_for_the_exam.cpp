//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,m,k;
      cin>>n>>m>>k;
      vector<ll> a(m);
      unordered_map<ll,ll> q;
      for(auto &x:a) cin>>x;
      for(ll i=0;i<k;i++){
        ll x;
        cin>>x;
        q[x]++;
      }
      if(n==k){
        for(ll i=0;i<m;i++) cout<<"1";
        cout<<endl;
      }
      else if(k<n-1){
        for(ll i=0;i<m;i++) cout<<"0";
        cout<<endl;
      }
      else{
        string s="";
        for(ll i=0;i<m;i++){
          if(q[a[i]]) s+="0";
          else if(!q[a[i]]) s+="1";
        }
        cout<<s<<endl;
      }
    }
}
