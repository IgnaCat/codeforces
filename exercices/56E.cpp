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

int n, m, k;
const int INF = 1e9;
const int MAXN = 1e5+3;
vector<pair<int, int>> adj[MAXN];
int d[MAXN];
vector<int> p(MAXN); //path
int forbiden[3];
int f=0;

bool dijkstra(int x){
    fill(d, d+n+1, -1);
	priority_queue<pair<ll,int> > q;
	d[x]=0;q.push({0,x});p[x]=-1;
    if (x == forbiden[f]) f++;
	while(!q.empty()){
		x=q.top().snd;ll c=-q.top().fst;q.pop();
        if(x == n) return true;
		if(d[x]!=c)continue;
		fore(i,0,adj[x].size()){
			int y=adj[x][i].fst; ll c=adj[x][i].snd;
			if((d[y]<0||d[x]+c<d[y]))
                if (y == forbiden[f]){
                    f++;
                    if (f == 3){
                        f = 0;
                        cout << "aaaa\n";
                        q.push({c,x});
                        break;
                    }
                }
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
    cin >> n >> m >> k;
    fore(i,0,m){
        int a, b;
        cin >> a >> b;
        adj[a].pb({b,1});
        adj[b].pb({a,1});
    }

    fore(i,0,k){
        cin >> forbiden[0] >> forbiden[1] >> forbiden[2];
    }

    if(dijkstra(1)){
        vector<int> path1 = restore_path(1, n);
        cout << path1.size()-1 << "\n";
        for (auto v : path1){
            cout << v << " ";
        }
    } else {
        cout << "-1" << " ";
    }
    
    cout << "\n";
	return 0;
}