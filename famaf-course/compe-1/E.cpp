#include <iostream>
#include <bits/stdc++.h>
#define fillarray for(int i=0;i<n;i++) 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;

int main() {FIN;
    ll n;
    cin >> n;
    pair<ll, ll> a[n];
    bool b = false;
    fillarray {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a+n);
    for (int i=0; i<n-1; i++){
        if (a[i].second > a[i+1].second){
            b = true;
            break;
        }
    }
    
    if (b){
        cout << "Happy Alex\n";
    } else {
        cout << "Poor Alex\n";
    }
	return 0;
}