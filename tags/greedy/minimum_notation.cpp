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
      string s;
      cin>>s;
      map<char,ll> f;
      multiset<char> st;
      for(auto &x:s){
        f[x]++;
        st.insert(x);
      }
      ll k=0;
      while(st.size()){
        if(s[k]!=*(st.begin())){
          auto it =st.find(s[k]);
          st.erase(it);
          if(s[k]<'9'){
            f[s[k]]--;
            f[s[k]+1]++;
          }
        }else st.erase(st.begin());
        k++;
      }
      for(auto &x:f){
        for(ll i=0;i<x.second;i++) cout<<x.first;
      }
      cout<<"\n";
    }
}