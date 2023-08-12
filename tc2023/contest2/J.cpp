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
const int INF = 1e9, MAXN = 60;
int n;
int dp[2][MAXN], pies[MAXN];

int f(int i, bool p){
    if (i == n) return 0;
	int &ret = dp[p][i];
	if (ret != INF) return ret;

    ret = max(pies[i]-f(i+1,!p), -pies[i]+f(i+1,p));
    return ret;
}

int main() {FIN;
    cin >> n;
    fore(i,0,n){
        cin >> pies[i];
    }
    fore(i,0,2) fore(j,0,MAXN) dp[i][j]=INF;
    f(0,0);
    int sum=0;
    fore(i,0,n) sum += pies[i]; 

    int a = (sum+dp[0][0])/2;
    int b = sum - a;
    cout << b << " " << a << "\n";
	return 0;
}