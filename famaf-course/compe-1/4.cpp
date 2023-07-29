#include <iostream>
#include <bits/stdc++.h>
#define fillarray for(int i=0;i<n;i++) 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;



int main() {FIN;
    ll n, q, l, r, k;
    string s, seg;
    cin >> n >> q;
    ll a[n];
    a[0] = 0;
    cin.ignore(256, '\n');
    getline(cin, s);
    for (int j=0; j<n; j++){
      seg = "";
      k = abs(96 - s[j]);
      while (k > 0){
        seg += s[j];
        k--;
      }
      a[j+1] = a[j] + seg.length();
    }
    for(int i=0;i<q;i++){
      cin >> l >> r;
      l--;
      cout << (a[r] - a[l]) << "\n";
    }

    return 0;
}