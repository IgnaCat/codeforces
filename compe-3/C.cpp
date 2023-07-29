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



int main() {FIN;
    int n, ans=0, count;
    cin >> n;
    vector<int> a(n+5);
    fore(i, 1, n){
        cin >> a[i];
    }  
    fore(i, 1, n){
        count = 0;
        int x = a[i];
        while(x != -1){
            x = a[x];
            count++;
        }
        ans = max(ans,count);
    }
    cout << ans+1 << "\n";
	return 0;
}