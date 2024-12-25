//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,t="";
    cin>>s;
    char c=s[0];
    ll lc=0,pc=1;
    t = t+c;
    for(ll i=1;i<s.length();i++){
      if(s[i]!=c){
        lc=pc;
        pc=1;
        c=s[i];
        t=t+c;
      }else{
        if(lc<=1&&pc<2){ t=t+c;pc++;}
      }
    }
    cout<<t<<endl;
}