//NAMEET BHOSLE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    
    while(t--) {
      ll n;
      cin>>n;
      string s;
      cin>>s;
      set<string> a;
      for(ll i=0;i<n;i++) a.insert(s.substr(i,1));
      for(ll i=1;i<n;i++) a.insert(s.substr(i-1,2));
      for(ll i=2;i<n;i++) a.insert(s.substr(i-2,3));
      
      bool fg=0;
      for(char c='a';c<='z';c++){
        string tt = "";
        tt.push_back(c);
        if(!a.count(tt)){
          cout<<tt<<endl;
          fg=true;
          break;
        }
      }
      if(fg) continue;
      for(char c1='a';c1<='z';c1++){
        for(char c2='a';c2<='z';c2++){
          string tt = "";
          tt.push_back(c1);
          tt.push_back(c2);
          if(!a.count(tt)){
            cout<<tt<<endl;
            fg=true;
            break;
          }
        }
        if(fg) break;
      }
      if(fg) continue;
      for(char c1='a';c1<='z';c1++){
        for(char c2='a';c2<='z';c2++){
          for(char c3='a';c3<='z';c3++){
            string tt ="";
            tt.push_back(c1);
            tt.push_back(c2);
            tt.push_back(c3);
            if(!a.count(tt)){
              cout<<tt<<endl;
              fg=true;
              break;
            }
          }
          if(fg) break;
        }
        if(fg) break;
      }

    }
}