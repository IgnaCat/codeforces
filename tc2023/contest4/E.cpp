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
    ll n,m, ans=0;
    cin >> n >> m;
    if (n == m) cout << 0 << "\n";
    else if (m%n != 0) cout << -1 << "\n";
    else {
        ll d = m/n;

        while (d%2 == 0){
            d = d / 2;
            ans++;
        }
        while (d%3 == 0){
            d = d / 3;
            ans++;
        }
        if (d == 1){
            cout << ans << "\n";
        }
        else {
            cout << -1 << "\n";
        }
    }
    
	return 0;
}