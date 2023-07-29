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
    fore(i,0,t){
        ll n,sum=0,ans = 0; 
        cin >> n;
        vector<pair<ll,ll>> a(n);
        fore(j,0,n) cin >> a[j].fst;
        fore(j,0,n) cin >> a[j].snd;
        sort(a.begin(), a.end());
        fore(j,0,n) sum += a[j].snd;
        ans = sum;
        fore(j,0,n){
            sum -= a[j].snd;
            ans = min(ans, max(a[j].fst, sum));
        }
        cout << ans << "\n";
    }
	return 0;
}