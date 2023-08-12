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
    int x[3], ans=0;
    cin >> x[1] >> x[2] >> x[3];

    sort(x, x+3);
    ans+=x[2]-x[1];
    ans+=x[1]-x[0];
    
    cout << ans << "\n";
	return 0;
}