#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;



int main() {FIN;
    ll n, m, a, fal, done;
    cin >> n >> m;
    fal = n;
    done = 1;
    ll array[n];
    string res;
    
    fore(i,0,n) {
        array[i] = 0;
    }

    fore(i,0,m) {
        cin >> a;
        array[a-1]++;
        if (array[a-1] == done) {
            fal--;
        }
        if (fal == 0) {
            res += "1";
            fal = n;
            done++;
            fore(j,0,n) {
                if (array[j] >= done) {
                    fal--;
                }
            }
        } else {
            res += "0";
        }
    }
    cout << res << "\n";
	return 0;
}