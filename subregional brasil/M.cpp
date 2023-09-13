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

int n, ans=0;
const int INF = 1e9;
const int MAXN = 100+3;
vector<pair<int, int>> g[MAXN];
vector<bool> visited(MAXN);
int dist[MAXN];
bool eliminados[MAXN];
bool flag;

bool dijkstra(int x){
	memset(dist,-1,sizeof(dist));
	priority_queue<pair<int,int> > q;
	dist[x]=0;q.push({0,x});
	while(!q.empty()){
		x=q.top().snd;int c=-q.top().fst;q.pop();
		if(dist[x]!=c)continue;
		fore(i,0,g[x].size()){
			int y=g[x][i].fst; int c=g[x][i].snd;
            if(dist[y]<0) dist[y]=dist[x]+c,q.push({-dist[y],y});
            else if (dist[x]+c==dist[y] && x!=y && eliminados[y]==0) ans++, eliminados[y]=1;
			else if(dist[x]+c<dist[y] && x!=y) return false;
		}
	}
    return true;
}

int main() {FIN;
    cin >> n;
    fore(i,0,n){
        fore(j,0,n){
            int w;
            cin >> w;
            g[i].pb({j,w});
        }
    }

    fore(i,0,n){
        fore(i,0,MAXN) eliminados[i]=0;
        if (!dijkstra(i)){
            cout << "-1" << '\n'; 
            return 0;
        } 
    }

    cout << ans/2 << '\n';
	return 0;
}