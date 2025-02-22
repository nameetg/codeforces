//PRACTICE
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pq priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>>

/*class DSU{
    vector<ll> parent, rank;
    public:
    DSU(ll n){
        rank.resize(n+1,0);
        parent.resize(n+1,0);
        for(ll i=0;i<=n;i++) parent[i]=i;
    }

    ll get_p(ll nd){
        if(nd==parent[nd]) return nd;
        return parent[nd]=get_p(parent[nd]);
    }

    void merge(ll u, ll v){
        ll pu=get_p(u), pv=get_p(v);
        if(pu==pv) return;
        else if(rank[pu]<rank[pv]) parent[pu]=pv;
        else if(rank[pu]>rank[pv]) parent[pv]=pu;
        else{
            parent[pv]=pu;
            rank[pu]++;
        }
    }
};*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) {
        int n,x,y;
        cin>>n>>x>>y;
        if(n%2){
            if((y-x)%2){
                for(int i=1;i<=n;i++){
                    if(i==n) cout<<2<<"\n";
                    else cout<<(i%2?0:1)<<" ";
                }
            }else{
                for(int i=1;i<=y;i++){
                    if(i==y) cout<<2<<(y==n?"\n":" ");
                    else cout<<(i%2?0:1)<<" ";
                }
                for(int i=y+1;i<=n;i++) cout<<(i%2?1:0)<<(i==n?"\n":" ");
            }
        }else{
            if((y-x)%2){
                for(int i=1;i<=n;i++) cout<<(i%2?0:1)<<(i==n?"\n":" ");
            }
            else{
                for(int i=1;i<=n;i++){
                    if(i==y) cout<<2<<(i==n?"\n":" ");
                    else cout<<(i%2?0:1)<<(i==n?"\n":" ");
                }
            }
        }
    }
    return 0;
}
