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
    int t; string name="vika";
    cin >> t;
    while(t--){
        int n,m,k=0;
        cin >> n >> m;
        vector<string> table(n);
        fore(i,0,n) cin >> table[i];
        fore(i,0,m){
            fore(j,0,n){
                if (table[j][i]==name[k]){
                    k++;
                    break;
                }
            }
        }
        if (k==4) cout << "YES" << '\n';
        else cout << "NO" << '\n';
        
    }
	return 0;
}