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
const int MAXN = 1000009;
const ll m = 1e9+9;
const ll p = 123;
ll x[MAXN];
ll h[MAXN];
unordered_map<ll,ll> ans;

ll hash_range(int i, int j, int n){
    return ((h[j]-h[i-1])*x[n-i+1]);
}

int main() {FIN;
    string s, alf; int k;
    cin >> s >> alf >> k;
    s=" "+s;
    int n = s.size()-1;
    x[1] = 1;
    fore(i,2,n+1) x[i] = (x[i-1] * p);

    h[1]=(s[1]-'a'+1);
    fore(i,2,n+1) h[i] = (h[i-1] + (s[i] - 'a' + 1) * x[i]);

    fore(i,1,n+1){
        int p=0;
        fore(j,i,n+1){
            if (alf[s[j]-'a']=='0'){
                p++;
            }
            if (p>k) break;
            ll hash=hash_range(i,j,n);
            ans[hash]++;
        }
    }
    cout << ans.size() << '\n';
	return 0;
}