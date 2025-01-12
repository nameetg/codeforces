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
      if(s[0]=='s')s[0]='.';
      if(s[s.length()-1]=='p') s[s.length()-1]='.';
      bool pp=0,ss=0;
      for(ll i=0;i<s.length();i++){
        if(s[i]=='s')ss=1;
        if(s[i]=='p')pp=1;
        if(ss&&pp)break;
      }
      if(ss&&pp) cout<<"NO\n";
      else cout<<"YES\n";
    }
}