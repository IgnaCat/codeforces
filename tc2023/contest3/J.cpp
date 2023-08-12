#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;

const int MAXN = 3e5 + 5;
vector<int> adj[MAXN];
bool subX[MAXN];
bool visited[MAXN];
int childCount[MAXN];

int dfs(int u, int x){
    visited[u] =  true;
    childCount[u] = 1;
    if (u == x) subX[u] = true;
    else subX[u] = false;

    for(auto v : adj[u]){
        if(visited[v] == 0){
            childCount[u] += dfs(v, x);
            subX[u] = subX[u] || subX[v];
        }
    }
 
    return childCount[u];
}

int main() {FIN;
    int n, x, y;
    cin >> n >> y >> x;
    fore(i,1,n){
        int a,b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    dfs(y, x);

    ll childYCount;
    for (auto v: adj[y]){
        if (subX[v]){
            childYCount = childCount[y] - childCount[v];
            break;
        }
    }
    ll flow = childCount[x]*childYCount;
    cout << 1ll*n*(n-1) - flow << "\n";
	return 0;
}

