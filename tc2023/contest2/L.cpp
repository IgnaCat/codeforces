#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;

int main() {FIN;
    ll n;
    vector<pair<ii, ll>> tv;
    cin >> n;
    fore(i,1,n+1){
        ll l, r;
        cin >> l >> r; 
        tv.pb({{l,-r},i});
    }
    sort(tv.begin(), tv.end());
    ll l=tv[0].fst.fst, r=-tv[0].fst.snd;
    fore(i,1,n){
        if(tv[i].fst.fst >= l && -tv[i].fst.snd <= r){
            cout << tv[i].snd << "\n";
            return 0;
        }
        else{
            if(((tv[i+1].fst.fst-1 == r) || (tv[i+1].fst.fst == r)) && (i != n-1) && (-tv[i+1].fst.snd > -tv[i].fst.snd)){
                cout << tv[i].snd << "\n";
                return 0;
            }
            if(tv[i].fst.fst > r){
                l = tv[i].fst.fst;
            }
            r = max(-tv[i].fst.snd, r);
        }
    }
    cout << -1 << "\n";
	return 0;
}

