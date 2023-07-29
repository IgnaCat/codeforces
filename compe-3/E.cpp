#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

const int MAXN = 2*1e5 + 10;
int n, m, ans=0;
int degree[MAXN];
bool visited[MAXN];
vector<int> adj[MAXN];
vector<int> component;

void dfs(int u){
    visited[u] =  true;
    component.pb(u);

    for(auto v : adj[u]){
        if(visited[v] == 0){
            dfs(v);
        }
    }

    return;
}

int main() {FIN;
    cin >> n >> m;
    fore(i,0,m){
        int x,y;
        cin >> x >> y;
        --x; --y;
        adj[x].pb(y);
        adj[y].pb(x);
        ++degree[x];
        ++degree[y];
    }

    fore(i,0,n){
        if (!visited[i]){
            component.clear();
            dfs(i);
            bool isCycle = true;
            for (auto v : component){
                isCycle &= (degree[v] == 2);
            }
            if (isCycle){
                ++ans;
            }
        }
    }

    cout << ans << "\n";
	return 0;
}