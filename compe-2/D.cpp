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
    ll n,m,sum=0;
    cin >> n;
    vector<ll> a(n);
    fore(i,0,n){
        ll x;
        cin >> x;
        sum += x;
        a[i]=sum;
    }
    cin >> m;
    fore(i,0,m){
        ll x;
        cin >> x;
        cout << lower_bound(a.begin(),a.end(),x)-a.begin()+1 << "\n";
    }
	return 0;
}