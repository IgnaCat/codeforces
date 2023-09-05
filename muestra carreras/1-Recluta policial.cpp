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
    int n, policias=0, ans=0;
    cin >> n;
    while(n--){
        int temp;
        cin >> temp;
        if (temp == -1){
            if (policias == 0) ans++;
            else policias--;
        }
        else policias+=temp;
    }
    cout << ans << '\n';
	return 0;
}