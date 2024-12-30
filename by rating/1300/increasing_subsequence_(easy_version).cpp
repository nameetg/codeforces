//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;
    ll s=0,e=n-1;
    ll l=-1;
    string t="";
    if(a[s]>a[e]){
      l=a[e];
      t += 'R';
      e--;
    }
    else{
      l=a[s];
      t+='L';
      s++;
    }
    while(s<=e){
      if(s==e&&l<a[s]){t+='L';s++;continue;}
      if(l>a[s]&&l>a[e]) break;
      else if(a[e]>a[s]&&l<a[s]){
        l=a[s];
        s++;
        t+='L';
      }else if(a[s]>a[e]&&l<a[e]){
        l=a[e];
        e--;
        t+='R';
      }else if(l>a[e]&&l<a[s]){
        l=a[s];
        s++;
        t+='L';
      }else if(l>a[s]&&l<a[e]){
        l=a[e];
        e--;
        t+='R';
      }
    }
    cout<<t.size()<<"\n"<<t<<endl;
}