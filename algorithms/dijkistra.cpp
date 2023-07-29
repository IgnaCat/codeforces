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

int n, m;
const int INF = 1e9;
const int MAXN = 1e5+3;
vector<pair<int, int>> adj[MAXN];
vector<bool> visited(MAXN);
int d[MAXN]; //distance
vector<int> p(MAXN); //path


// void dijkstra(int s){
//     d.assign(MAXN, INF);
//     p.assign(MAXN, -1);
//     priority_queue<ii, vector<ii>, greater<ii>> pq;
// 	d[s] = 0;
//     pq.push({0,s});

//     while (!pq.empty()){
//         s=pq.top().snd; int c=pq.top().fst;
//         pq.pop();
//         if(visited[s]) continue;
// 		visited[s]=1;
//         for (auto v : adj[s]){
//             int y=v.fst; int w = v.snd;
//             if (d[s]+w < d[y]){
//                 d[y]=d[s]+w;
//                 pq.push({d[y], y});
//                 p[y] = s;
// 			}
//         }
//     }
// }

bool dijkstra(int x){
    fill(d, d+n+1, -1);
	priority_queue<pair<ll,int> > q;
	d[x]=0;q.push({0,x});p[x]=-1;
	while(!q.empty()){
		x=q.top().snd;ll c=-q.top().fst;q.pop();
        if(x == n) return true;
		if(d[x]!=c)continue;
        if(visited[x]) continue;
 	    visited[x]=1;
		fore(i,0,adj[x].size()){
			int y=adj[x][i].fst; ll c=adj[x][i].snd;
			if(!visited[y] && (d[y]<0||d[x]+c<d[y]))
				d[y]=d[x]+c,q.push({-d[y],y}),p[y]=x;
		}
	}
    return false;
}

vector<int> restore_path(int s, int t) {
    vector<int> path;

    for (int v = t; v != s; v = p[v]) path.push_back(v);
    path.push_back(s);

    reverse(path.begin(), path.end());
    return path;
}

int main() {FIN;
    cin >> n >> m;
    fore(i,0,m){
        int a, b, w;
        cin >> a >> b >> w;
        adj[a].pb({b,w});
        adj[b].pb({a,w});
    }

    if(dijkstra(1)){
        vector<int> path1 = restore_path(1, n);
        for (auto v : path1){
            cout << v << " ";
        }
    } else {
        cout << "-1" << " ";
    }
    
    cout << "\n";
	return 0;
}