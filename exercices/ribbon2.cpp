#include <iostream>
 
using namespace std;
const int MAXN = 4000;
int dp[MAXN + 3] = {0};
 
int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, abc[4]; 
    cin >> n >> abc[0] >> abc[1] >> abc[2];
    for(int i = 1; i <= n; i++) dp[i] = -100000000; // dp[0] = 0, dp[i] = -inf con i>0
    for(int i = 0; i < 3; i++) for(int j = abc[i]; j <= n; j++) dp[j] = max(dp[j], dp[j - abc[i]] + 1);
    cout << dp[n] << "\n";
    return 0;
}
