#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
 
int main(){
  ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll sum =0;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
      cin>>a[i];
      sum += a[i];
    }
    ll avg = sum/n;
    sort(a.begin(),a.end());
    if(n<=2) cout<<-1<<endl;
    else if(a[n/2]<avg/2) cout<<0<<endl;
    else{
      ll num =a[n/2]*2*n+1-sum;
      if(num<=0) cout<<0<<endl;
      else cout<<num<<endl;
      }
    }
  }
