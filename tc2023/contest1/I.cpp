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

map<string, string> gems = {{"purple","Power",}, {"green","Time",}, {"blue","Space",},
                            {"orange","Soul",}, {"red","Reality",}, {"yellow","Mind",}};
set<string> sawn;
vector<string> print;

int main() {FIN;
    int n, ans=0;
    cin >> n;
    fore(i,0,n){
        string a;
        cin >> a;
        sawn.insert(a);
    }

    for (auto &item : gems) {
        if (!sawn.count(item.fst)){
            ans++;
            print.push_back(item.snd);
        }
    }

    cout << ans << "\n";
    fore(i,0, print.size()){
        cout << print[i] << "\n";
    }

	return 0;
}