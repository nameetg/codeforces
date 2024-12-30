//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,si=-1;
    string s;
    cin>>n>>s;
    vector<ll> f(10);
    for(ll i=1;i<=9;i++) cin>>f[i];
    for(ll i=0;i<n;i++){
      if(s[i]-'0'<f[s[i]-'0']){si=i;break;}
    }
    if(si==-1) cout<<s<<endl;
    else if(si==n-1){
      s[si]=f[s[si]-'0']+'0';
      cout<<s<<endl;
    }
    else{
      ll ei=-1;
      for(ll i=si+1;i<n;i++){
        ei=i;
        if(s[i]-'0'>f[s[i]-'0']) break;
      }
      if(ei==n-1&&s[n-1]-'0'<f[s[n-1]-'0']) ei++;
      for(ll i=si;i<ei;i++){
        s[i]=f[s[i]-'0']+'0';
      }
      cout<<s<<endl;
    }
}