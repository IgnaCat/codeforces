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
const ll INF = 1e9;
int n, ans = INF;
ii start, end_point;
bool vis[101][101];
vector<string> grid;
vector<ii> moves = {{1,0},{0,1},{-1,0},{0,-1}};
vector<ii> a,b;

void dfs(int x, int y, int cnt) {
    if(x < 0 || y < 0 || x >= n || y >= n) return;
    if (grid[x][y] == '1') return;
    if (vis[x][y] == cnt) return;

    if (cnt == 1) a.pb({x,y});
    else b.pb({x,y});

    vis[x][y] = cnt;
    grid[x][y] = '1';
    for (auto move : moves){
		int nx=x+move.fst, ny=y+move.snd;
        dfs(nx, ny, cnt);
	}
}

int main() {FIN;
    cin >> n;
    cin >> start.fst >> start.snd;
    cin >> end_point.fst >> end_point.snd;
    start.fst--;start.snd--;end_point.fst--;end_point.snd--;
    grid.resize(n+3);
    fore(i, 0, n) cin >> grid[i];

    dfs(start.fst, start.snd, 1);
    if(vis[end_point.fst][end_point.snd]==1){
          cout<< 0 << "\n";
          return 0;
    }
    else {
        dfs(end_point.fst, end_point.snd, 2);
        for(auto i: a) {
            for(auto j: b) {
                int ni = pow(abs(i.first-j.first), 2);
                int nj = pow(abs(i.second-j.second), 2);
                ans = min(ans, ni+nj);
            }
        }

        if(ans == INF) cout << 0;
        else cout << ans;
        
        cout << "\n";
        return 0;
    }

}