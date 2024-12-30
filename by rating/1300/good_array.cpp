//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,mx1=-1,A=0,mx2=-1,fmx1=0;
    cin>>n;
    vector<ll> a(n);
    for(auto &x:a) {cin>>x;mx1=max(mx1,x);A+=x;}
    for(auto &x:a){
      if(x==mx1){fmx1++;continue;}
      mx2=max(mx2,x);
    }
    if(fmx1>1) mx2=mx1;
    vector<ll> v;
    for(ll i=0;i<n;i++){
      if(a[i]!=mx1&&A-a[i]==2*mx1)v.push_back(i+1);
      else if(a[i]==mx1&&A-a[i]==2*mx2)v.push_back(i+1);
    }
    cout<<v.size()<<endl;
    for(auto &x:v) cout<<x<<" ";
    cout<<endl;
}