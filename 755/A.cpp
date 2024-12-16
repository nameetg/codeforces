#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n){
  int cnt = 0;
  if (n <= 1) return false;
  else {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)cnt++;
        }

    if (cnt > 0) return false;
    else return true;
  }
  return true;
}

int main(){
  ll n;
  cin>>n;
  if(n%2) cout<<3<<endl;
  else{
    for(ll i=1;i<=1000;i++){
      ll x = n*i+1;
      if(!isPrime(x)){cout<<i<<endl;break;}
    }
  }
}