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
    ll n, ans=0;
    cin >> n;
    vector<ii> topics(n, {-1,-1});
    vector<ll> costs(n);
    fore(i,0,n){
        cin >> topics[i].fst;
    }
    fore(i,0,n){
        cin >> topics[i].snd;
    }
    fore(i,0,n){
        costs[i]=topics[i].fst-topics[i].snd;
    }

    sort(costs.begin(), costs.end());

    fore(i,0,n){
        if (costs[i]<=0) continue;
        ll pos = lower_bound(costs.begin(), costs.end(), -costs[i]+1) - costs.begin();
        ans += i - pos;
    }
    cout << ans << "\n";
	return 0;
}