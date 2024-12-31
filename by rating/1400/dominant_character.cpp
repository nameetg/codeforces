//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      string s;
      cin>>s;
      ll ans=1e9;
      for(ll i=0;i<n;i++){
        vector<ll> f(3,0);
        f[s[i]-'a']++;
        for(ll j=i+1;j<min(n,i+7);j++){
            f[s[j]-'a']++;
            if(f[0]>f[1]&&f[0]>f[2]) ans =min(ans,j-i+1);
        }
      }
      cout<<(ans==1e9?-1:ans)<<endl;
    }
}