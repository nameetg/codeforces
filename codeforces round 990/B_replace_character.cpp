//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n, mx=-1,mn=1e9;
      cin>>n;
      string s;
      cin>>s;
      char mxx='*',mnn='.';
      unordered_map<char,ll> f;
      for(ll i=0;i<s.length();i++){
        f[s[i]]++;
        if(f[s[i]]>mx) mxx =s[i];
        mx =max(mx,f[s[i]]);
      }
      for(auto& a:f){
        if(mn>a.second && a.first!=mxx){ mnn=a.first;mn=a.second;}
      }
      for(ll i=0;i<n;i++){
        if(s[i]==mnn){s[i]=mxx;break;}
      }
      cout<<s<<endl;
    }
}