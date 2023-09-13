#include <iostream>
using namespace std;
 
int main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long m, n, res;
    cin >> m >> n;
    res = (m*n);
    res = res/2;
    
    cout << res << "\n";
	return 0;
}