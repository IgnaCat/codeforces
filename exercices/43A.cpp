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
    int n, a=0, b=0;
    string team1, team2;
    cin >> n;
    fore(i,0,n){
        string x;
        cin >> x;
        if (i==0) team1 = x;
        if (x.compare(team1) != 0) team2 = x;
        if (x.compare(team1) == 0) a++;
        else b++;
    }
    if (a>b) cout << team1 << "\n";
    else cout << team2 << "\n";
	return 0;
}