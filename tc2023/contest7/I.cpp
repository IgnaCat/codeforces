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
    int n,k;
    cin >> n >> k;
    int ans = n;
    vector<int> b(n);
    fore(i,0,n){
        cin >> b[i];
    }
    sort(b.begin(),b.end());
    fore(i,0,n-1){
        int j = upper_bound(b.begin(), b.end(), b[i])-b.begin();
        if (b[j]-b[i] <= k && j<n) ans--;
    }
    cout << ans << "\n";
	return 0;
}