#include <iostream>
#include <bits/stdc++.h>
#define fillarray for(int i=0;i<n;i++) 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;



int main() {FIN;
    ll t, h, m, res;
    cin >> t;

    for (int i=0; i<t; i++){
      res = 0;
      cin >> h >> m;
      if (h==23){
        res += (60-m);
      }
      else {
        res = (23-h) * 60 + (60-m);
      }
      cout << res << "\n";
    }
    return 0;
}



