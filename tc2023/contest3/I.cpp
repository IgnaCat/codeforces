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
    string s; ll ans=0;
    cin >> s;
    fore(i,0,s.size()-1){
        if ((s[i]-'0')%4 == 0){
            ans++;
        }
        if ((((s[i]-'0')*10)+(s[i+1]-'0'))%4 == 0){
            ans = ans + i + 1;
        }
    }
    if ((s[s.size()-1]-'0')%4 == 0) ans++;
    cout << ans << '\n';
	return 0;
}