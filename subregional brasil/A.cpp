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



int main() {FIN;
    int n, h, ans=0; 
    cin >> n >> h;
    vector<int> he(n);
    fore(i,0,n) cin >> he[i];
    fore(i,0,n){
        if (h >= he[i]) ans++;
    } 
    cout << ans << '\n';
	return 0;
}