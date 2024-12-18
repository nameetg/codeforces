// D. DIGITAL STRING MAXIMIZATION
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      string s;
      cin>>s;
      vector<ll> d(s.length());
      for(ll i=0;i<s.length();i++)d[i] =s[i]-'0';

      for(ll i=1;i<s.length();i++){
        ll ti=i;
        while(ti>=1&&d[ti]>1&&d[ti]-1>d[ti-1]){
          ll temp =d[ti];
          d[ti]=d[ti-1];
          d[ti-1]=temp-1;
          ti--;
        }
      }
      for(ll i=0;i<d.size();i++) cout<<d[i];
      cout<<endl;
    }
}