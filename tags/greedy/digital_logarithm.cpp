//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll f(ll n){
  ll ct=0;
  while(n){
    ct++;
    n/=10;
  }
  return ct;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,i=0,j=0,res=0;
      cin>>n;
      vector<ll> a(n),b(n);
      for(auto &x:a) cin>>x;
      for(auto &x:b) cin>>x;
      sort(a.begin(),a.end());
      sort(b.begin(),b.end());
      vector<ll> aa,bb;
      while(i<n&&j<n){
        if(a[i]==b[j]) {i++,j++;}
        else if(a[i]<b[j]){
          aa.push_back(a[i]);
          i++;
        }else{
          bb.push_back(b[j]);
          j++;
        }
      }
      while(i<n){
        aa.push_back(a[i]);
        i++;
      }
      while(j<n){
        bb.push_back(b[j]);
        j++;
      }
      for(ll k=0;k<aa.size();k++){
        if(aa[k]>9) {aa[k]=f(aa[k]);res++;}
        if(bb[k]>9) {bb[k]=f(bb[k]);res++;}
      }
      a.clear(),b.clear();
      sort(aa.begin(),aa.end());
      sort(bb.begin(),bb.end());
      n=aa.size(),i=0,j=0;
      while(i<n&&j<n){
        if(aa[i]==bb[j]) {i++,j++;}
        else if(aa[i]<bb[j]){
          a.push_back(aa[i]);
          i++;
        }else{
          b.push_back(bb[j]);
          j++;
        }
      }
      while(i<n){
        a.push_back(aa[i]);
        i++;
      }
      while(j<n){
        b.push_back(bb[j]);
        j++;
      }
      for(ll k=0;k<a.size();k++){
        if(a[k]==1||b[k]==1) res++;
        else res+=2;
      }
      cout<<res<<"\n";
    }
}