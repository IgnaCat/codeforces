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


string shortenedString(string str){
    string s = "";
    s += str[0];
    int count = 0;
    for(int i=1; i<=str.length()-2; i++){
        count++;
    }
    s += to_string(count);
    s += str[str.length()-1];
    return s;
}


int main() {FIN;
    int n; cin >> n;
    while (n--){
        string s; cin >> s;
        if(s.length() <= 10){
            cout << s << "\n";
        }
        else{
            s = shortenedString(s);
            cout << s << "\n";
        }
    }
	return 0;
}