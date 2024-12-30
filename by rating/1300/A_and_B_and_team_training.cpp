//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m,t=0;
    cin>>n>>m;
    while(1){
      if(n<1||m<1||n+m<3) break;
      if(n>m){
        n-=2;m--;
        t++;
      }else{
        n--;m-=2;
        t++;
      }
    }
    cout<<t<<endl;
}