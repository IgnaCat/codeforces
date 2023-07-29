#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;


ll check(vector<ll> &v, ll n, ll c, ll mid){
    ll cows = 1;
    ll last = v[0];
    fore(i,1,n){
        if (v[i]-last >= mid){
            ++cows;
            last = v[i];
        }
    }
    
    return cows >= c;
}


int main() {FIN;
    ll t;
    cin>>t;
    while (t--){
        ll n,c;
        cin>>n>>c;
        vector<ll> v;
        fore(i,0,n){
            ll x;
            cin>>x;
            v.pb(x);
        }
        sort(v.begin(),v.end());
        ll l=0,r=v[n-1]-v[0],ans=0;
        while (l<=r){
            ll mid = (l+r)/2;
            if (check(v, n, c, mid)){
                ans = mid;
                l = mid+1;
            }
            else {   
                r = mid-1;
            }
        }
        cout << ans << "\n";
    }
	return 0;
}