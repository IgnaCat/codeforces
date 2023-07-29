#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;



int main() {FIN;
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    ll ans = 0;
    if (n*a < (n/m)*b && n>=m){
        ans += n*a;
    }
    else if (n < m){
        if (n*a < b)
            ans += n*a;
        else
            ans += b;
    }
    else {
        ans += (n/m)*b;
        n = (n%m);
        if (n*a < b)
            ans += n*a;
        else
            ans += b;
    }
    cout << ans << "\n";
	return 0;
}