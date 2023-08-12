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
    ll a,b;
    cin >> a >> b;
    while(true){
        if (a==0 || b==0){
            break;
        }  
        if(a<2*b && b<2*a){
            break;
        }

        if (a >= 2*b){
            a = a%(2*b);
        }
        else {
            b = b%(2*a);
        }
    }
    cout << a << " " << b << "\n";
	return 0;
}