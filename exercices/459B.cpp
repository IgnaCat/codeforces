#include <iostream>
#include <bits/stdc++.h>
#include <climits>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
const int INF = INT_MAX;


int main() {FIN;
    ll n, mn=INF, mx=0;
    cin >> n;
    ll a[n];
    fore(i,0,n) {
        cin >> a[i];
        mn = min(a[i], mn);
        mx = max(a[i], mx);
    }
    ll tx=0, tn=0;
    fore(i,0,n) {
        if (a[i] == mn) tn++;
        if (a[i] == mx) tx++;
    }
    if (mn == mx) cout << 0 << " " << (n*(n-1))/2;
    else cout << mx-mn << " " << tn*tx;
    cout << "\n";
	return 0;
}

