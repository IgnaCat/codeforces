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
    ll n, k, lastDigit;
    cin >> n >> k;
    
    for (int i = 0; i<k; ++i){
        lastDigit = n % 10;
        if (lastDigit != 0){
            n--;
        }
        else {
            n = n/10;
        }
    }

    cout << n << "\n";
	return 0;
}