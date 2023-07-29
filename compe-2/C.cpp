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
    ll n;
    cin >> n;
    ll denominations[5] = {1, 5, 10, 20, 100};
    ll ans = 0;
    for (ll i = 4; i >= 0; i--){
        ans += n/denominations[i];
        n = n%denominations[i];
    }
    cout << ans << "\n";
	return 0;
}