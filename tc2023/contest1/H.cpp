#include <bits/stdc++.h>
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
#define MAXN 26
#define fst first
#define snd second
using namespace std;
typedef long long ll;
typedef unsigned int ui;
vector<pair<int,ll>> g[MAXN];  // u->[(v,cost)]
ll dist[MAXN];
ll dist2[MAXN];
ll letras[MAXN][MAXN];//costo de aparear 2 letras
void dijkstra(int x){
	forn(i,0,MAXN){
        dist[i]=-1;
    }
	priority_queue<pair<ll,int>> q;
	dist[x]=0;q.push({0,x});
	while(!q.empty()){
		x=q.top().snd;ll c=-q.top().fst;q.pop();
		if(dist[x]!=c)continue;
		forn(i,0,g[x].size()){
			int y=g[x][i].fst; ll c=g[x][i].snd;
			if(dist[y]<0||dist[x]+c<dist[y])
				dist[y]=dist[x]+c,q.push({-dist[y],y});
		}
	}
};
int main(){
    FIN;
    ll cost,res=0;
    forn(i,0,26){
        forn(j,0,26){
            cin>>cost;
            if(i==j){
                continue;
            }
            g[i].push_back({j,cost});
        }
    }
    string s;
    cin>>s;
    forn(i,0,26){
        dijkstra(i);
        forn(j,0,26){
            letras[i][j]=dist[j];
        }
    }
    forn(i,0,s.size()/2){
        cost = letras[int(s[i])-97][int(s[(s.size()-1)-i])-97];
        forn(j,0,26){
            cost=min(cost, letras[int(s[i])-97][j] + letras[int(s[(s.size()-1)-i])-97][j]);
        }
        res+=cost;
    }
    show(res);
    return 0;
}