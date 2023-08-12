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
    int cnts[4];
    fore(i,0,4){
        cin >> cnts[i];
    }
    if (((cnts[0] != cnts[3]) && cnts[0] == 0) || (cnts[2]>0 && cnts[0]==0)){
        cout << 0 << "\n";
    }
    else{
        cout << 1 << "\n";  
    }
	return 0;
}