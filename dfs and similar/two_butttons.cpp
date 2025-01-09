//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m;
    cin>>n>>m;
    if(n>m) cout<<n-m;
    else{
      ll res=0;
      while(n<m){
        if(m%2)m++;
        else m/=2;
        res++;
      }
      cout<<res+n-m;
    }
}