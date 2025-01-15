//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t=1;
    cin>>t;
    while(t--) {
      ll n;
      cin>>n;
      vector<pair<ll,ll>> a;
      ll ct = 0;
      while (n % 2 == 0) {
        ct++;
        n /= 2;
      }
      if (ct > 0) a.push_back({ct, 2});
      for(ll i=3;i*i<=n;i++){
        ll c=0;
        while(n%i==0){
          c++;
          n/=i;
        }
        if(c) a.push_back({c,i});
      }
      if(n!=1) a.push_back({1,n});
      sort(a.begin(),a.end(),greater<pair<ll,ll>>());
      // reverse(a.begin(),a.end());
      ll res=0;
      while(a.size()){
        ll c=a.back().first,p=1;
        for(ll i=0;i<a.size();i++){
          p*=a[i].second;
          a[i].first-=c;
        }
        res+=(p*c);
        // while(a.size()&&a.back().first==0) a.pop_back();
        a.erase(remove_if(a.begin(), a.end(), [](const pair<ll, ll>& factor) {
                return factor.first == 0;
            }), a.end());
      }
      cout<<res<<"\n";
    }
}