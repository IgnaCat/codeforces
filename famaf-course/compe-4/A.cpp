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
    ll a[4], x, y, z, w;
    cin >> a[0] >> a[1] >> a[2] >> a[3];

    sort(a, a+4);
    x = a[3] - a[0];
    y = a[3] - a[1];
    z = a[3] - a[2];

    cout << x << " " << y << " " << z << "\n";
	return 0;
}