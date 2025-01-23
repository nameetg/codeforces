//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,k;
      cin>>n>>k;
      cout<<k+(k-1)/(n-1)<<"\n";
    }
}