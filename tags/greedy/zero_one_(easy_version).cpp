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
      ll n,x,y;
      cin>>n>>x>>y;
      string a,b;
      cin>>a>>b;
      // ll ch=0;
      vector<ll> ch;
      for(ll i=0;i<n;i++){
        if(a[i]!=b[i]) ch.push_back(i);
      }
      if(ch.size()%2) cout<<-1<<"\n";
      else{
        if(ch.size()==2){
          if(ch[0]==ch[1]-1) cout<<min(2*y,x)<<"\n";
          else cout<<y<<"\n";
        }
        else cout<<y*(ch.size()/2)<<"\n";
      }
    }
}