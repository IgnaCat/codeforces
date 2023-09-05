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
    int n,m; string s1;
    cin >> n >> s1;
    vector<int> pos[26];
    fore(i,0,n) pos[s1[i]-'a'].pb(i+1);
    cin >> m;
    while(m--){
        string t; int max=0;
        vector<int> cant(26,0);
        cin >> t;
        for(auto c : t)cant[c-'a']++;
        fore(i,0,26) if (cant[i]>0 && pos[i][cant[i]-1]>max) max=pos[i][cant[i]-1];
        cout << max << '\n';
    }
	return 0;
}