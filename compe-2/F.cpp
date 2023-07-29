#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define fst firsts
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;

bool check(vector<ll> &v, ll n, ll mid){

    vector<ll> now = v;

    for (int i=n-1; i>=2; i--){
        if (now[i] >= mid){
            ll can = min(now[i]-mid, v[i]);
            can /= 3;
            now[i] -= can;
            now[i-1] += can;
            now[i-2] += 2ll*can;
        }
    }

    fore(i,0,n) if (now[i] < mid) return false;

    return true;
}

int main() {FIN;
    ll t;
    cin >> t;
    while(t--){
        ll n, ans=1;
        cin >> n;
        vector<ll> v(n);
        fore(j,0,n) cin >> v[j];
        
        ll l = 0, r = 1e9;
        while(l <= r){
            ll mid = (l+r)/2;

            if(check(v,n,mid)){
                ans = mid;
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        cout << ans << "\n";
    }
	return 0;
}