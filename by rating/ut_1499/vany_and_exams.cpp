//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,r,avg,A=0;
    cin>>n>>r>>avg;
    vector<ll> a(n);
    vector<vector<ll>> b(n,vector<ll>(2,0));
    for(ll i=0;i<n;i++){
      cin>>a[i];
      A+=a[i];
      cin>>b[i][0];
      b[i][1]=i;
    }
    ll res=0,i=0;
    sort(b.begin(),b.end());
    while(A<n*avg && i<n){
      ll g=a[b[i][1]],gn=n*avg-A;
      if(g<r){
        res +=(min(gn,r-g)*b[i][0]);
        A+=min(gn,r-g);
      }
      i++;
    }
    cout<<res<<endl;
}