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
	while (t--){
		int m,k,a1,ak,need=0;
		cin >> m >> k >> a1 >> ak;
		if (m<k){
			cout << max(0,m-a1) << '\n';
			continue;
		}
		int resto_k = m%k;
		if (resto_k<=a1){
			a1-=resto_k;
			m-=resto_k;
			resto_k = 0;
		}
		else{
			need += resto_k-a1;
			a1=0;
		}
		ak += a1/k;

		need += max(0, m/k - ak);
		cout << need << '\n';
	}

	return 0;
}