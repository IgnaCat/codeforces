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
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        fore(i,0,n) cin >> a[i];
        int ans=0;
        ll sum=0;
        bool sign=false;
        fore(i,0,n){
            sum+=abs(a[i]);
            if (a[i]<0 && !sign) ans++, sign=true;
            if(a[i]>0) sign=false;
        }
        cout << sum << " " << ans << '\n';
    }
	return 0;
}