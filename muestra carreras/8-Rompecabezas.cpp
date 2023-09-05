#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    int array[m];
    for(int i = 0 ; i < m ; i++){
        cin >> array[i];
    }

    sort(array, array + m);
    int best = 1e8;
     
    for (int i=0; i <= (m-n); i++){
        best = min(best, array[i+n-1] - array[i]);
    }
    
    cout << best << '\n';
    return 0;
}