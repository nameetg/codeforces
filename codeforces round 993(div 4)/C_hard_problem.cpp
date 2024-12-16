// C. HARD PROBLEM

#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int m,a,b,c;
    cin>>m>>a>>b>>c;
    int ans=0,rs=0;
    if(m>=a) {ans+=a;rs+=m-a;}
    else ans+=m;

    if(m>=b) {ans+=b;rs+=m-b;}
    else ans+=m;

    if(c>rs) ans+=rs;
    else ans+=c;

    cout<<ans<<endl;
  }
}