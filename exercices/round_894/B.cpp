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
        int n,e1;
        cin >> n;
        vector<int> s;
        cin >> e1;
        s.pb(e1);
        fore(i,1,n){
            int x;
            cin >> x;
            if (x < s.back()){
                s.pb(s.back());
            }
            s.pb(x);
        } 
        cout << s.size() << '\n';
        for (int x : s)
            cout << x << " ";
        cout << "\n";

    }
	return 0;
}