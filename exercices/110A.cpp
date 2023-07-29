#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    bool res = true;
    int count = 0;
    bool last = false;
    getline(cin, s);
    for (long long i = 0; i < s.length(); i++){
        if (s[i] - '0' == 4 || s[i] - '0' == 7){
            count++;
            last = true;
        } 
        else {
            last = false;
        }
    }
    if (count != 4 && count != 7){
        res = false;
    }
    else {
        res = true;
    }
    
    if (res){cout << "YES\n";}
    else {cout << "NO\n";}
	return 0;
}