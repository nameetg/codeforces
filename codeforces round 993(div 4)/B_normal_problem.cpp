// A. EASY PROBLEM

#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    string a;
    cin>>a;
    reverse(a.begin(),a.end());
    for(int i=0;i<a.length();i++){
      if(a[i]=='p') a[i]='q';
      else if(a[i]=='q') a[i]='p';
    }
    cout<<a<<endl;
  }
}