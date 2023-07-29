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
const int N = 2*1e5+10;
int t;


int main() {FIN;
    cin >> t;
    while (t--){
        int n, a[N], ans[N];
        cin >> n;
        fore(i, 0, n){
            cin >> a[i];
        }
        for(int i=n-1;0<=i;i--){
            ans[i] = a[i];
            int j = i + a[i];
            if (j < n){
                ans[i] += ans[j];
            }
        }

        cout << *max_element(ans, ans+n) << "\n";
    }
    
	return 0;
}