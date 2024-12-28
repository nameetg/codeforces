//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n,bc=0,wc=0;
  cin>>n;
  string s;
  cin>>s;
  for(auto &x:s) {
    bc += (x=='B');
    wc += (x=='W');
  }
  if(!bc || !wc) cout<<0<<endl;
  else {
    if(n%2){
      if(bc%2){
        vector<ll> a;
        for(ll i=n-1;i>0;i--){
          if(s[i]==s[i-1]&&s[i]=='W'){
            a.push_back(i);
            s[i]='B';
            s[i-1]='B';
            }else if(s[i]=='W'&&s[i-1]=='B'){
              a.push_back(i);
              s[i]='B';
              s[i-1]='W';
            }
        }
        wc=0;
        for(auto &x:s) wc+=(x=='W');
        if(wc) cout<<-1<<endl;
        else{
          cout<<a.size()<<endl;
          for(auto &x:a) cout<<x<<" ";
        }
      }else{
        vector<ll> a;
        for(ll i=n-1;i>0;i--){
          if(s[i]==s[i-1]&&s[i]=='B'){
            a.push_back(i);
            s[i]='W';
            s[i-1]='W';
            }else if(s[i]=='B'&&s[i-1]=='W'){
              a.push_back(i);
              s[i]='W';
              s[i-1]='B';
            }
        }
        bc=0;
        for(auto &x:s) bc+=(x=='B');
        if(bc) cout<<-1<<endl;
        else{
          cout<<a.size()<<endl;
          for(auto &x:a) cout<<x<<" ";
        }
      }
    }else{
      vector<ll> a;
      for(ll i=n-1;i>0;i--){
        if(s[i]==s[i-1]&&s[i]=='B'){
          a.push_back(i);
          s[i]='W';
          s[i-1]='W';
          }else if(s[i]=='B'&&s[i-1]=='W'){
            a.push_back(i);
            s[i]='W';
            s[i-1]='B';
          }
      }
      bc=0;
      for(auto &x:s) bc+=(x=='B');
      if(bc) cout<<-1<<endl;
      else{
        cout<<a.size()<<endl;
        for(auto &x:a) cout<<x<<" ";
      }
    }
  }
}