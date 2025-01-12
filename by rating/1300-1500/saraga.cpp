//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,t;
    cin>>s>>t;
    unordered_map<char,ll> f;
    for(ll i=1;i<s.length();i++){
        if(!f[s[i]]) f[s[i]]=i;
    }
    ll si=-1,ti=-1,l=1e10;
    for(ll i=t.length()-2;i>=0;i--){
        if(f[t[i]]&&t.length()-i+f[t[i]]<l){
            l=t.length()-i+f[t[i]];
            si=f[t[i]],ti=i;
        }
    }
    if(si==-1&&ti==-1) cout<<-1<<"\n";
    else{
        for(ll i=0;i<si;i++) cout<<s[i];
        for(ll i=ti;i<t.length();i++) cout<<t[i];
        cout<<"\n";
    }
}