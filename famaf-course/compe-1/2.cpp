#include <iostream>
#include <bits/stdc++.h>
#define fillarray for(int j=0;j<n;j++) 
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;



int main() {FIN;

    ll t, n;
    string s1, s2;
    bool res = true;
    cin >> t;
    for (int i=1; i<=t; i++){
      res = true;
      s1 = "";
      s2 = "";
      cin >> n;
      cin.ignore(256, '\n');
      getline(cin, s1);
      getline(cin, s2);
      fillarray {
        if ((s1[j] == s2[j]) || (s1[j] == 'G' && s2[j] == 'B') || (s2[j] == 'G' && s1[j] == 'B')){
          continue;
        }
        else {
          res = false;
          break;
        }
      }
      if (res){
        cout << "YES\n";;
      } else {
        cout << "NO\n";
      }
    }

    

    return 0;
}



