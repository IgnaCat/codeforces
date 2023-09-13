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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n+1),b;
        fore(i,1,n+1) cin >> a[i];
        if (a[1] != n){
            cout << "NO" << '\n';
            continue;
        }
        for (int i=n; i>=1; --i){
            while (b.size() < a[i]){
                b.push_back(i);
            }
        }
        bool b0 = true;
        fore(i,1,n+1){
            if (a[i] != b[i-1]){
                cout << "NO" << '\n';
                b0 = false;
                break;
            }
        }
        if (b0) cout << "YES" << '\n';
    }
    return 0;
}