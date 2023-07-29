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

//329B. Biridian Forest
const int MAXN=1024, INF=MAXN*MAXN;
int n,m;
int d[MAXN][MAXN];
char mat[MAXN][MAXN];
bool vis[MAXN][MAXN];
int ans;
vector<ii> moves = {{1,0},{0,1},{-1,0},{0,-1}};


bool valido(int i, int j){
	if (!(0<=i && i<n && 0<=j && j<m)) return false;
	if (mat[i][j] == 'T') return false;
	return true;
}

int to(int i, int j){
	return m*i+j;
}

ii from(int x){
	return {x/m,x%m};
}

void dijkstra(int ri, int rj){
	fore(i,0,n) {
		fore(j,0,m) {
			d[i][j] = INF;
		}
	}
	d[ri][rj] = 0;
	priority_queue<ii, vector<ii>, greater<ii>> pq;
	pq.push({0, to(ri,rj)});

	while(!pq.empty()){
		int costo = pq.top().fst;
		auto it = from(pq.top().snd);
		pq.pop();
		int i=it.fst, j=it.snd;
		if(vis[i][j]) continue;
		vis[i][j]=1;

		for (auto move : moves){
			int ni=i+move.fst, nj=j+move.snd;
			if (valido(ni,nj)){
				if (d[i][j]+1 < d[ni][nj]){
					d[ni][nj]=d[i][j]+1;
					pq.push({d[ni][nj], to(ni,nj)});
				}
			}
		}

	}

}

int main() {FIN;
    
    cin >> n >> m;
    int x,y;
	int min_dist = MAXN*MAXN;
    fore(i,0,n){
    	fore(j,0,m){
    		cin >> mat[i][j];
    		if(mat[i][j] == 'E'){
    			x = i;
    			y = j;
    		}
    	}
    }

    dijkstra(x,y);

	fore(i,0,n){
    	fore(j,0,m){
			if (mat[i][j] == 'S'){
				min_dist = d[i][j];
			}
    	}
    }

    fore(i,0,n){ 
    	fore(j,0,m){
    		if (('0' <= mat[i][j] && mat[i][j] <= '9') && d[i][j] <= min_dist){
				ans += (mat[i][j]-'0');
			}
    	}
    }
    
    cout << ans << "\n";
	return 0;
}