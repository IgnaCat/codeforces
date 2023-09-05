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
    int n,m;
    cin >> n >> m;
    vector<int> rooms(n);
    fore(i,0,n) cin >> rooms[i];
	sort(rooms.begin(), rooms.end());
    int max=0;
    fore(i,0,m) if (rooms[i]>max) max=rooms[i];

    cout << max << '\n';
    return 0;
} 