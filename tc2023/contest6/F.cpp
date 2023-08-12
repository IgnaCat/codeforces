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
int ans, aux=0;


int main() {FIN;
    string s;
    cin >> s;
    int n = s.length();
    fore(i,0,n){
        if (s[i] == 'Q'){
            aux = 0;
            fore(j,i,n){
                if (s[j] == 'A'){
                    aux++;
                }
                if (s[j] == 'Q' && aux>0){
                    ans += aux;
                }
            }
        }
    }
    cout << ans << "\n";
	return 0;
}