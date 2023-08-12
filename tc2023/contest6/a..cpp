#include<string>
#include<iostream>
#include<vector>
#include<stack>
#include <cstring>
#include<deque>
#include<algorithm>
#include<queue>
#include<set>
#include <unordered_set>
#include<map>
#include<numeric>
#include<cmath>
#include<iomanip>
#include <unordered_map>
using namespace std;
#define ll long long
ll MOD = 1e9 + 7;
ll Pow(ll b, ll p) {
    if (!p) return 1;
    ll ret = Pow(b, p >> 1);
    // ret %= MOD;
    ret *= ret;
    //  ret %= MOD;
    if (p & 1) {
        ret *= b;
        //  ret %= MOD;
    }
    return ret;
}
ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
#define endl "\n"
#define FaSt cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)
#define f(a) for(int i=0;i<a;i++)
#define fj(a) for (int j = 0; j < a; j++)
#define RIP return 0;
#define ONES(n) __builtin_popcount(n)
#define wh int v189;cin>>v189;while(v189--)
#define put(a)cout<<a<<endl
#define yea put("YES")
#define Endl endl
#define no put("NO")
#define all(a) a.begin(),a.end()
int dx[] = { +0, +0, -1, +1, +1, +1, -1, -1 };
int dy[] = { -1, +1, +0, +0, +1, -1, +1, -1 };
void solve() {
    int n;
    cin >> n;
    vector<int>v(n),prv(n),after(n),ans(n+1);
    f(n)cin >> v[i];
    stack<int>stk;
    stk.push(-1);
    f(n) {
        while (stk.top() != -1 && v[stk.top()] >= v[i])stk.pop();
        prv[i] = stk.top();
        stk.push(i);
    }
    while (stk.size())stk.pop();
    stk.push(n);
    for (int j = n - 1; j >= 0; j--) {
        while (stk.top() != n && v[stk.top()] >= v[j])stk.pop();
        after[j] = stk.top();
        stk.push(j);
    }
    f(n) {
        int cl = after[i] - prv[i] - 1;
        ans[cl] = max(ans[cl], v[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        ans[i] = max(ans[i], ans[i+1]);
    }
    for (int i = 1; i <= n; i++)cout << ans[i] << " ";
}

/*


 */

int main() {
    FaSt;
    int t = 1;
    // cin>>t;
    while (t--) {
        solve();
    }
}