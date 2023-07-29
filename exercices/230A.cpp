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
    ll t,n;
    cin>>t>>n;
    vector<pair<ll,ll>> v;
    fore(i,0,n){
        ll x,y;
        cin>>x>>y;
        v.pb({x,y});
    }
    sort(v.begin(),v.end());
    fore(i,0,n){
        if(t>v[i].fst){
            t+=v[i].snd;
        }
        else{
            cout<<"NO\n";
            return 0;
        }
    }
    cout <<"YES\n";
	return 0;
}