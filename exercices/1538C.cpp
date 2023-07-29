#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;


unsigned int factorial(unsigned int n) 
{
    if (n == 0)
       return 1;
    return n * factorial(n - 1);
}

int check(){
    return 0;
}


int main() {FIN;
    ll t;
    cin >> t;
    fore(i,0,t){
        ll n, l, r, ans=0;
        cin >> n >> l >> r;
        ll a[n];
        fore(j,0,n){ cin >> a[j];}
        sort(a,a+n);
        fore(j,0,n){
            ll y = l-a[j];
            ll z = r-a[j];
            ll p = lower_bound(a+j+1,a+n,y)-a;
            ll q = upper_bound(a+j+1,a+n,z)-a;
            ans += q-p;
        }
        cout << ans << "\n";
    }
	return 0;
}