#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x, odd = 0, even = 0;
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x%2 == 0) even+=x;
            else odd+=x;
        }
        if(even > odd) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}