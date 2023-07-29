#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;

const ll MAXNK = 3e5+5;
queue<ll> q;
vector<pair<ll, ll>> adj[MAXNK];

int main() {FIN;
    ll n,k,d;
    cin >> n >> k >> d;
    vector<bool> visited(n + 1,false);
    vector<ll> colour(n,-1); // what edges are important
    fore(i,0,k){
        int x;
        cin >> x;
        q.push(x);
        visited[x] = 1;
    }
    fore(i,1,n){
        int x,y;
        cin >> x >> y;
        adj[x].pb({y,i});
        adj[y].pb({x,i});
    }

    while(!q.empty()){
        ll node = q.front();
        q.pop();
        for(auto x: adj[node]){
            ll val = x.fst; ll index = x.snd;
            if(!visited[val]){
                visited[val] = true;
                colour[index] = 1; // edge i is important
                q.push(val);
            }
        }
    }

    vector<ll> ans;
    fore(i,1,n) if (colour[i] == -1) ans.pb(i);

    cout << ans.size() << '\n';
    for (ll edge:ans) cout << edge << " ";

    cout << "\n";
	return 0;
}