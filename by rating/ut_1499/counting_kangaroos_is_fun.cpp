//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;
    sort(a.begin(),a.end());
    ll vk=0,s=(n-1)/2,e=n-1;
    while(s>=0&&e>(n-1)/2){
      if(a[e]>=2*a[s]){
        vk++;
        s--;
        e--;
      }
      else{ s--;vk++;}
    }
    vk+= (s+1);
    vk+=(e-(n-1)/2);
    cout<<vk<<endl;
}