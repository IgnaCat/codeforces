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
const int MAX = 1e6+5;
int dp[10][MAX];

int f(int x){
	int prod=1;
	while(x){
		if(x%10)prod*=(x%10);
		x/=10;
	}
	return prod;
}

int g(int x){
	if(x<10)return x;
	return g(f(x));
}


int main() {FIN;
	fore(i,1,10){
		dp[i][0]=0;
	}
	fore(i,1,MAX){
		dp[g(i)][i]++;
	}
	fore(i,1,10){
		fore(j,1,MAX){
			dp[i][j] += dp[i][j-1];
		}
	}
	int Q;
	cin >> Q;
	while (Q--){
		int l, r, k;
		cin >> l >> r >> k;
		l--;
		cout << dp[k][r]-dp[k][l] << '\n';
	}
	return 0;
}