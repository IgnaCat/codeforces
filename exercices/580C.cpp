#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;

const int MAXN = 1e5 + 10;
vector<int> adj[MAXN];
bool cats[MAXN];
bool visited[MAXN];

ll m, ans;

void dfs(int u, int sum){
    visited[u] =  true;

    if(cats[u]) sum++;
    else sum = 0;

    if(sum > m) return;

    if(u != 1 && adj[u].size() == 1) ans++;

    for(auto v : adj[u]){
        if(visited[v] == 0){
            dfs(v, sum);
        }
    }

    return;
}

int main() {FIN;
    ll n;
    cin >> n >> m;
    fore(i,1,n+1) cin >> cats[i];
    fore(i,1,n){
        ll x,y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    dfs(1, 0);

    cout << ans << "\n";
	return 0;
}