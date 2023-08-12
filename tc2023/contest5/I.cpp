#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

int dp[4005];
int abc[3];

int main() {FIN;
    int n;
    cin >> n;
    fore(i,0,2) cin >> abc[i];
    dp[0]=0;
    fore(i,1,n) dp[i]=-1e6;
    fore(i,0,2){
        fore(j,abc[i],n){
            dp[j] = max(dp[j], dp[j-abc[i]]+1);
        }
    }
    
    cout << dp[n] << "\n";
	return 0;
}