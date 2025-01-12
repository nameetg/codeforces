//CODEFORCES ROUND 996 (DIV. 2)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n,m;
      cin>>n>>m;
      string s;
      cin>>s;
      vector<vector<ll>> a(n+1,vector<ll>(m+1,0));
      for(ll i=0;i<n;i++){
        ll A=0;
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
            // b[i][j]=a[i][j];
            A+=a[i][j];
        }
        a[i][m]=A;
      }
      for(ll i=0;i<m;i++){
        ll B=0;
        for(ll j=0;j<n;j++){
            B+=a[j][i];
        }
        a[n][i]=B;
      }
      ll r=0,c=0,A=0;
      for(ll i=0;i<s.length();i++){
        if(s[i]=='D'){
            a[r][c]=A-a[r][m];
            a[n][c]+=a[r][c];
            r++;
        }else{
            a[r][c]=A-a[n][c];
            a[r][m]+=a[r][c];
            c++;
        }
      }
      a[n-1][m-1]=A-a[n-1][m];
      for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++) cout<<a[i][j]<<" ";
        cout<<"\n";
      }
    }
}
