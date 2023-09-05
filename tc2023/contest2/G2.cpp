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
    ll w,h,n;
    cin >> w >> h >> n;
    set<ll> cuts_w;
    set<ll> cuts_h;
    multiset<ll> long_w;
    multiset<ll> long_h;
    cuts_w.insert(0);
    cuts_w.insert(w);
    cuts_h.insert(0);
    cuts_h.insert(h);
    long_w.insert(w);
    long_h.insert(h);

    fore(i,0,n){
        char exe; ll x;
        cin >> exe >> x;
        if (exe == 'H'){
            auto pos = cuts_h.lower_bound(x);
            --pos;
            auto begin = pos;
            ++pos;
            long_h.erase(long_h.lower_bound((*pos)-(*begin)));
            long_h.insert(x-(*begin));
            long_h.insert(*(pos)-x);
            cuts_h.insert(x);
        }
        if (exe == 'V'){
            auto pos = cuts_w.lower_bound(x);
            --pos;
            auto begin = pos;
            ++pos;
            long_w.erase(long_w.lower_bound((*pos)-(*begin)));
            long_w.insert(x-(*begin));
            long_w.insert((*pos)-x);
            cuts_w.insert(x);
        }
        cout << (*(--long_h.end())) * (*(--long_w.end())) << '\n'; 
    }
	return 0;
}