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
	int t; 
    cin >> t;
    while(t--){
        ll ans=0, n, aux=0;
        cin >> n;
        ans = n;
        aux = n;
        while(aux > 1){
            aux /= 2;
            ans += aux;
        }
        cout << ans << '\n';
    }
    return 0;
}