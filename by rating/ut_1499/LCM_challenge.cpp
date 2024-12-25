//PRACTICING
#include<bits/stdc++.h>
using namespace std;
#define ll long long
                          
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    if(n<3) cout<<n<<endl;
    else if(n%2!=0) cout<<n*(n-1)*(n-2)<<endl;
    else if(n%3!=0) cout<<n*(n-1)*(n-3)<<endl;
    else cout<<(n-1)*(n-2)*(n-3)<<endl;
}