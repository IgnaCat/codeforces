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
    ll t;
    cin >> t;
    while(t--){
        ll a,b,c,mx,mn;
        cin >> a >> b >> c;
        mx = max(a,max(b,c));
        mn = min(a,min(b,c));
        if (mx == a){
            if (mn == b){
                cout << c << "\n";
            }
            else {
                cout << b << "\n";
            }
        }
        else if (mx == b){
            if (mn == a){
                cout << c << "\n";
            }
            else {
                cout << a << "\n";
            }
        }
        else {
            if (mn == a){
                cout << b << "\n";
            }
            else {
                cout << a << "\n";
            }
        }

    }
	return 0;
}