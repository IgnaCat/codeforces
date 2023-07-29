#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;

bool check(vector<pair<ll,ll>> &v, ll n, ll p){
    ll people = 1;
    fore(i,0,n){
        if (p-v[i].fst <= people && people <= v[i].snd+1){ // v[i].fst >= p-people && people-1 <= v[i].snd
            people++;
        }
    }
    return people > p;
}

int main() {FIN;
    ll t;
    cin >> t;
    fore(i,0,t){
        ll n, ans=1;
        cin >> n;
        vector<pair<ll,ll>> v(n);
        fore(j,0,n){
            ll a,b;
            cin >> a >> b;
            v[j].fst = a;
            v[j].snd = b;
        }
        ll l = 0, r = n;
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