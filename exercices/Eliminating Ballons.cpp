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
    vector<int> b(n);
    multiset<int> arrows;
    fore(i,0,n) cin >> b[i];
    arrows.insert(b[0]);
    fore(i,1,n){
        int x = b[i]+1;
        if (arrows.count(x)){
            auto itr = arrows.find(x);
            if(itr!=arrows.end()){
                arrows.erase(itr);
                arrows.insert(b[i]);
            }
        }
        else arrows.insert(b[i]);
    }
    cout << arrows.size() << '\n';
	return 0;
}