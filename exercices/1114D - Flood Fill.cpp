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
const int MAXN = 5003;
int dp[MAXN][MAXN];
int c[MAXN];

int f(int l, int r){
    int &ret = dp[l][r];
    if (ret != -1) return ret;
    if (l >= r) return ret = 0;
    if (c[l]==c[r]) return ret = f(l+1,r-1)+1;
    else return ret = min(f(l,r-1), f(l+1,r))+1;
}

int main() {FIN;
    int n,m=0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x;cin >> x;
        if (x != c[m]) c[++m] = x;
    }
    memset(dp, -1, sizeof(dp));
    cout << f(1,m) << '\n';
	return 0;
}