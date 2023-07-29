#include <iostream>
#include <bits/stdc++.h>
#define fillarray for(int j=1;j<=n;j++) 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;



int main() {FIN;
    ll n, p=0, p_index=0, i_index=0;
    cin >> n;
    ll a[n+1];
    fillarray {
        cin >> a[j];
        if(a[j]%2==0) {
            p++;
            p_index = j;
        }
        else {
            i_index = j;
        }
    }
    if(p==1) cout << p_index << "\n";
    else cout << i_index << "\n";
	return 0;
}