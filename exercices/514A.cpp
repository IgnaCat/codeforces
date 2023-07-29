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
    string x;
    cin>>x;
    fore(i,0,x.size()){
        if (x[i] == '9' && i==0) continue;
        if (x[i] == '9') x[i] = '0';
        if (x[i] > '4' && x[i] != '9') x[i] = '9' - x[i] + '0';
    }
    cout << x << "\n";
	return 0;
}