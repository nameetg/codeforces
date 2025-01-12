//CODEFORCES ROUND 996 (DIV. 2)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,a,b;
      cin>>n>>a>>b;
      if(abs(a-b)%2) cout<<"NO\n";
      else cout<<"YES\n";
    }
}