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
    int k, max=0;
    cin >> k;
    int r[k];
    fore(i,0,k){
        cin >> r[i];
        if(r[i]>max){
            max = r[i];
        }
    } 
    if( max <= 25){
        cout << 0 << "\n";
    }
    else{
        cout << max - 25 << "\n"; 
    }
	return 0;
}