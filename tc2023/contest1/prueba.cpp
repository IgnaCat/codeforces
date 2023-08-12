#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;

int main(){FIN;
    int n, m, f(0);
    cin >> n >> m;
    char t[n][m];

    fore(i,0,n) cin >> t[i];

    fore(i,0,n-1) fore(j,0,m-1){
            string w = "";
            w += t[i][j];
            w += t[i][j + 1];
            w += t[i + 1][j];
            w += t[i + 1][j + 1];
            sort(w.begin(), w.end());
            if (w == "acef")
                f++;
        }

    cout << f << endl;
    return 0;
}