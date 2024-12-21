#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  vector<int> v;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    v.push_back(a);
  }

  k = v[k-1];
  sort(v.begin(),v.end());
  int ind = lower_bound(v.begin(),v.end(),k) - v.begin();

  if(v[ind]==0){
    while(v[ind]==0 && ind < n) ind++;
  }

  cout<< n-ind<<endl;
}