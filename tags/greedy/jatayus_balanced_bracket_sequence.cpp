//PRACTICE
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
      ll ct=1;
      for(ll i=1;i<s.length();i++){
        if(s[i]==')'&&s[i-1]==')') ct++;
      }
      cout<<ct<<"\n";
    }
}