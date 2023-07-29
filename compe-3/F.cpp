#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
const int N = 2000 + 11; 
ll n;
ii grid[N];
ll c[N];
ll k[N];
int fa[N]; //father
struct edge
{
    int u, v; //from, to
    ll w; // starting point, end point, weight
};
vector<edge> e; //edges
vector<edge> mst; //minimum spanning tree
ll mon; //money

set<int> s; //power stations
priority_queue<ii,vector<ii>,greater<ii> > pq;

int find(int x){
    return fa[x]==x?x:fa[x]=find(fa[x]);
}

void merge(int x,int y){
    int xx=find(x);
    int yy=find(y);
    fa[xx]=yy;
}

bool cmp(edge a,edge b){
    return a.w<b.w;
}

void kruskal(){
    sort(e.begin(),e.end(),cmp);
    for(int i=0;i<e.size();i++){
        if(find(e[i].u) != find(e[i].v)){
            mst.push_back(e[i]);
            merge(e[i].u,e[i].v);
            mon += e[i].w;
        }
    }
}


int main() {FIN;
    cin >> n;
    fore(i, 1, n){
        fa[i]=i;
    }
    fore(i, 1, n){
        ll x, y;
        cin >> x >> y;
        grid[i].fst = x; grid[i].snd = y;
    }
    fore(i, 1, n) cin >> c[i];
    fore(i, 1, n) cin >> k[i];

    fore(i, 1, n){
        edge source;
        source.u=0;source.v=i;
        source.w=c[i];
        e.push_back(source);
    }

    fore(i, 1, n){
        fore(j, i+1, n){
            int dis=abs(grid[i].fst-grid[j].fst)+abs(grid[i].snd-grid[j].snd);
            int peso=k[i]+k[j];
            e.push_back({i,j,1LL*dis*peso});
        }
    }

    kruskal();

    cout << mon << "\n"; 

    for(int i=0;i<mst.size();i++){
        if (mst[i].u == 0){
            s.insert(mst[i].v);
        }
        else {
             pq.push({mst[i].u,mst[i].v});
        }
    }

    cout << s.size() << "\n";

    for(set<int>::iterator it=s.begin(); it!=s.end(); it++){
        cout << *it << " ";
    }
    cout << "\n";

    cout << pq.size() << "\n";

    while(!pq.empty()){
        cout << pq.top().fst << " " << pq.top().snd << "\n";
        pq.pop();
    }

	return 0;
}