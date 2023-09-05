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
    while(t--){
        string s,a,b;
        cin >> s;
        fore(i,0,s.size()) a+="()";
        fore(i,0,s.size()) b+="(";
        fore(i,0,s.size()) b+=")";
        size_t found_a = a.find(s);
        size_t found_b = b.find(s);
        if (found_a == string::npos){
            cout << "YES" << '\n';
            cout << a << '\n';
        } 
        else if (found_b == string::npos){
            cout << "YES" << '\n';
            cout << b << '\n';
        } 
        else cout << "NO" << '\n';
    }
	return 0;
}