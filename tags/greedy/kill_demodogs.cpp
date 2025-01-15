//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll M=1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      ll res=(n%M*(n+1)%M)%M;
      res = (res%M*(4*n-1)%M)%M;
      cout<<(337*res)%M<<"\n";
    }
}