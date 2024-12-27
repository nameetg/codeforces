//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isGood(string &s){
  ll n=s.length();
  if(n%2) return false;
  for(ll i=0;i<n;i+=2){
    if(s[i]==s[i+1]) return false;
  }
  return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    string s;
    cin>>n>>s;
    if(isGood(s)){
      cout<<0<<endl;
      cout<<s<<endl;
    }else{
      string t="";
      for(ll i=0;i<n;){
        if(i+1<n){
          ll j=i+1;
          while(s[j]==s[i] && j<n) j++;
          if(j<n) t =t+s[i]+s[j];
          i=j+1;
        } else i++;
      }
      cout<<s.length()-t.length()<<endl;
      cout<<t<<endl;
    }
}