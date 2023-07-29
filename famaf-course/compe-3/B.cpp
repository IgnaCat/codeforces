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
    int n;
    cin >> n;
    vector<int> children(n), parent(n), leafs(n);
    for (int i=1; i<n; ++i){
        cin >> parent[i];
        parent[i]--;
        children[parent[i]]++;
    }
    for (int i=0; i<n; ++i){
        if (children[i] == 0){
            leafs[parent[i]]++;
        }
    }
    for (int i=0; i<n; ++i){
        if (children[i] > 0 && leafs[i] < 3) {
            cout << "NO" << "\n";
            return 0;
        }
    }

    cout << "YES" << "\n";
	return 0;
}

