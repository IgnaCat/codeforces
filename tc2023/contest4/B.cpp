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
const int MAXN = 1e4+3;
vector<char> color[2];
vector<char> son[2][MAXN];
vector<bool> visited(MAXN);

int main() {FIN;
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        fore(i,1,n){
            char a; int b;
            cin >> a >> b;
            color[0][i] = a;
            son[0][b+1].pb(i);
        }
    }
	return 0;
}