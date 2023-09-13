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
    string s; int k, k_i=0;
    cin >> s >> k;
    int n = s.size();
    map<char, int> pa;
    vector<char> ans(n); 
    fore(j,0,k){
        pa.clear();
        k_i = j;
        while (k_i <= n){
            pa[s[k_i]]++;   
            k_i += k;
        }
        k_i = j;
        fore(i,0,26){
            char x = 'a' + i;
            if(pa[x]>=1){
                ans[k_i] = x;
                k_i += k;
                pa[x]--;
                i--;
            }
        }

    }
    fore(j,0,ans.size()){
        cout << ans[j];
    }
    cout << '\n';    
	return 0;
}