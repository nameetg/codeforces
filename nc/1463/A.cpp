#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
  ll t;
  cin>>t;
  while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
    ll sum = a+b+c;
    if(sum%9) cout<<"NO"<<endl;
    else {
      if(a>=sum/9 && b>=sum/9 && c>=sum/9) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
  }
}