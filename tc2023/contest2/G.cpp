#include <iostream>
#include <bits/stdc++.h>
#include <map>
 
#define fore(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef unsigned long long ull;
 
 
int main() {FIN;
    ull w, h, n;
    cin >> w >> h >> n;
 
    set <ull> cortes_h;
    multiset <ull> pedazos_h;
    pedazos_h.insert(h);
    cortes_h.insert(0);
    cortes_h.insert(h);
 
    set <ull> cortes_w;
    multiset <ull> pedazos_w;
    pedazos_w.insert(w);
    cortes_w.insert(0);
    cortes_w.insert(w);
    for(ull i=0; i<n; ++i){
        pair<ull, char> cuts;
        cin >> cuts.second >> cuts.first; 
        if(cuts.second == 'H'){
            auto it = cortes_h.lower_bound(cuts.first);
            --it;
            auto it_p = it;
            ++it;
            pedazos_h.erase(pedazos_h.lower_bound(*(it) - (*(it_p))));
            pedazos_h.insert(cuts.first - (*(it_p)));
            pedazos_h.insert((*it) - cuts.first);
            cortes_h.insert(cuts.first);
        }
        if(cuts.second == 'V'){
            auto it = cortes_w.lower_bound(cuts.first);
            --it;
            auto it_p = it;
            ++it;
            pedazos_w.erase(pedazos_w.lower_bound(*(it) - (*(it_p))));
            pedazos_w.insert(cuts.first - (*(it_p)));
            pedazos_w.insert((*it) - cuts.first);
            cortes_w.insert(cuts.first);
        }
        cout << *(--pedazos_w.end()) * *(--pedazos_h.end()) << endl;
    }
}

