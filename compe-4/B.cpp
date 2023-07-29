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
const int N=300+5;
int t, n;
ll a[N];
vector<ll> ans(N);

int main() {FIN;
    cin >> t;
    while (t--){
        cin >> n;
        fore(i, 1, n){
            cin >> a[i];
        }
        int i=1, j=n;
        ans.clear();
        fore(k, 1, n){
            if ((k%2) != 0){
                ans[k] = a[i];
                i++;
            }
            else{
                ans[k] = a[j];
                j--;
            }
        }
        fore(i, 1, n){
            if (i != n){
                cout << ans[i] << " ";
            }
            else {
                cout << ans[i];
            }
        }
        cout << "\n";
    }
	return 0;
}