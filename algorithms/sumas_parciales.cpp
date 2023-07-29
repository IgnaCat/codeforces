#include <iostream>
#include <algorithm>


using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n, m, res, type, l, r;
    cin >> n;
    long long a[n];
    long long sumas[n+1];
    long long ordenado[n+1]; //sumas ordenadas decrecientemente
    sumas[0] = 0;
    for (long long i = 0; i < n; i++){
        cin >> a[i];
        sumas[i+1] = sumas[i] + a[i];
    }
    sort(a, a+n);
    for (long long i = 0; i < n; i++){
        ordenado[i+1] = ordenado[i] + a[i];
    }

    cin >> m;
    for (long long j = 0; j < m; j++){
        cin >> type >> l >> r;
        l--;
        if (type == 1){
            res = sumas[r] - sumas[l];
        } 
        else { 
            res = ordenado[r] - ordenado[l];;
        }
        cout << res << "\n";
    }
	return 0;
}