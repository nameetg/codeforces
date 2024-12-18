// B. PAINT A STRIP
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ll t=1;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      if(n==1) cout<<1<<endl;
      else if(n<=4) cout<<2<<endl;
      else{
        ll temp =4,ans=2;
        while(temp<n){
          temp = 2*(temp+1);
          ans++;
        }
        cout<<ans<<endl;
      }
    }
}