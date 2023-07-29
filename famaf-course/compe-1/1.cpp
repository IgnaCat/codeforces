#include <iostream>
#include <bits/stdc++.h>
#define fillarray for(int i=1;i<=n;i++) 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;



int main() {FIN;
    ll n;
    cin >> n;
    string res = "";
    string s = "I hate";
    string s2 = "I love";
    fillarray {
      if (i==1){
        res = s;
      }
      else if (i%2 == 0){
        if (i != n+1){
          res = res + " that ";
        }
        res = res + s2;
      }
      else {
        if (i != n+1){
          res = res + " that ";
        }
        res = res + s;
      }
    }
    res = res + " it";

    cout << res << "\n";
        return 0;
}



