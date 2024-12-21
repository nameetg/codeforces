#include <bits/stdc++.h>
using namespace std;

bool loveTria(vector<int> &f){
  int n=f.size()-1;
  for(int i=1;i<=n;i++){
    int a=i;
    int b=f[a];
    int c =f[b];
    if(f[c]==a) return true;
  }
  return false;
}

int main()
{
  int n;
  cin>>n;
  vector<int>  f(n+1);
  for(int i=1;i<=n;i++) cin>>f[i];
  if(loveTria(f)) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}