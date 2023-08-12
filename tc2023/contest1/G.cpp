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
int n, m;
ll ans = 0;



int main() {FIN;
    cin >> n >> m;
    vector<ll> a(n);



    
    vector<ll> b(m);
    fore(i,0,n){
        cin >> a[i];
    }
    fore(i,0,m){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    for(int i = 0; i < min(n, m) && b[i] > a[i]; i++)
    {
        ans += b[i]-a[i];
    }
    cout << ans << "\n";
	return 0;
}