#include <iostream>

using namespace std;

int ribbon(int i, int j, int a[3]){
    int res;
    cout << res << ", i: " << i << ", j: " << j << "\n";
    if (j == 0){res = 0;}
    if (j>0 && i==0){res = -1000000;}
    if (a[i] > j > 0 && i>0){res = ribbon(i-1, j, a);}
    if (a[i] <= j && i>0){res = max(ribbon(i-1, j, a), 1 + ribbon(i-1, j-a[i], a));}

    //cout << res << " " << i << "\n";
    return res;
}


int dinamica(int n, int a[4]){
    int res=0;
    int matriz[3][n];
    for (int i=0; i<n; i++){matriz[i][0]= 0;} 
    for (int j=0; j<3; j++){matriz[0][j]= -10000;}
    for (int i=1; i<n; i++){
        for (int j=1; j<3; j++){
            if (a[j] > j){matriz[i][j] = matriz[i-1][j];}
            else { matriz[i][j] = max(matriz[i-1][j], 1+matriz[i][j-a[j]]);}
        }
    }
    res= matriz[3][n];
    return res;
}

int backtrack(int n, int a[4]){
    int res=-1000000;

    if (n==0){res=0;}
    if (n>=a[1]){res = max(backtrack(n-a[1], a)+1, res);}
    if (n>=a[2]){res = max(backtrack(n-a[2], a)+1, res);}
    if (n>=a[3]){res = max(backtrack(n-a[3], a)+1, res);}
    return res;
}


int main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, a, b, c, respuesta;
    cin >> n >> a >> b >> c;
    int array[4];
    array[0] = -1;
    array[1] = a;
    array[2] = b;
    array[3] = c;
    //res = ribbon(3, n, array);
    //res = dinamica(n, array);
    respuesta = backtrack(n, array); 

    cout << respuesta << "\n";
	return 0;
}