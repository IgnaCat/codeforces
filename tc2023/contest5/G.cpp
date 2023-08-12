#include <bits/stdc++.h>
#include <climits>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define forn(a,b,c) for(unsigned int a=b; a<c;++a)
#define show(a) cout<<a<<"\n"
#define showAll(a) for(auto i:a) cout<<i<<" ";cout<<"\n"
#define input(a) for(auto& i:a) cin>>i
#define all(a) a.begin(),a.end()
#define DGB(a) cout<<#a<<" = "<<a<<"\n"
#define RAYA cout<<"=============="<<"\n"
#define pii pair<int,int>
#define MAXN 100005
#define ALPH 26
#define fst first
#define snd second
using namespace std;
typedef long long ll;
typedef unsigned int ui;
vector<vector<int>> adj(MAXN); 
vector<bool> visited(MAXN);
ll curcost;
vector<ll> costs;
 
void dfs(int v) {
    int res=1;
    visited[v] = true;
    curcost=min(curcost, costs[v]);
    for (int u : adj[v]) {
        if (!visited[u]){
            dfs(u);
        }
    }
}
 
int main(){
    FIN;
    ll c;
    int n,m,u,v;
    cin>>n>>m;
    costs.resize(n);
    forn(i,0,n){
        cin>>costs[i];
    }
    while(m--){
        cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll res = 0;
    forn(i,0,n){
        if(!visited[i]){
            curcost=1e9;
            dfs(i);
            res+=curcost;
        }
    }
    show(res);
    return 0;
}