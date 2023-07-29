#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;



int main() {FIN;
    int t;
    cin >> t;
    fore(i,0,t){
        int a;
        cin >> a;
        if(360%(180-a)==0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
	return 0;
}