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
    while (t--){
        ll n, k;
        cin >> n >> k;
        vector<pair<ll,ll>> v(n);
        fore(i,0,n){
            ll a;
            cin >> a;
            v[i].fst = a;
        }
        fore(i,0,n){
            ll b;
            cin >> b;
            v[i].snd = b;
        }
        sort(v.begin(),v.end());
        fore(i,0,n){
            if (k >= v[i].fst){
                k += v[i].snd;
            }
            else {
                break;
            }
        }
        cout << k << "\n";
    }
	return 0;
}