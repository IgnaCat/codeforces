#include <bits/stdc++.h>
#include<climits>
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
#define fst first
#define snd second
using namespace std;
typedef long long ll;
typedef unsigned int ui;
const ll MAXN = 3e5 + 10;
vector<vector<ll>> adj(MAXN);  // adjacency list representation
vector<bool> used(MAXN);
ll n; // number of nodes

ll bfs(ll s, ll y){//bfs that does not consider the edge leading to node y
    ll res=1;
    queue<ll> q;
    q.push(s);
    used[s] = true;
    while (!q.empty()) {
        ll v = q.front();
        q.pop();
        for (ll u : adj[v]) {
            if (!used[u] && u!=y) {
                used[u] = true;
                q.push(u);
                ++res;
            }
        }
    }
    return res;
}

int main(){
    FIN;
    ll x,y,flow,bee,a,b;
    cin>>n>>x>>y;
    forn(i,1,n){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    flow=bfs(x,y);//nodes reachable from floweria not crossing beetopia
    bee=bfs(y,x);//nodes reachable from beetopia not crossing floweria
    ll dif=(flow+bee)-n;//nodes in between flow and bee
    flow=abs(flow-dif);//nodes from which I cant reach bee
    bee=abs(bee-dif);//nodes I can't reach if I cross flow
    ll result=flow*((n-bee)-1);//amount of possibilities starting from flow side
    result+=abs((n-flow)*(n-1));//amount of possibilities starting from bee side or inbetween
    show(result);
    return 0;
}