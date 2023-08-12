
#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(ll i=a;i<b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef unsigned long long ull;

#define MAX 3*1e5+1
vector<ull> relations[300005];
bool color[300005];
int main() {FIN;
    ull n, m;
    cin >> n >> m;
    for(ull i=0; i<m; ++i){
        ull aux, aux2;
        cin >> aux >> aux2;
        relations[aux].push_back(aux2);
        relations[aux2].push_back(aux);
    }
    for(ull i=1; i<=n; ++i){
        color[i] = true;
    }
    bool flag = false;
    while(flag == false){
        for(ull i=1; i<=n; ++i){
            ull problems = 0;
            for(auto vecino : relations[i]){
                if(color[vecino] == color[i]){
                    problems++;
                }
            }
            if(problems > 3){
                cout << "mas de dos con problemas" << endl;
                return 0;
            }
            if(problems >= 2){
                color[i] =! color[i];
            }
        }
        bool correcto = true;
        for(ull i=1; i<=n; ++i){
            ull problems = 0;
            for(auto vecino : relations[i]){
                if(color[vecino] == color[i]){
                    problems++;
                }
            }
            if(problems >= 2){
                correcto = false;
                break;
            }
        }
        flag = correcto;

    }
    for(ull i=1; i<=n; ++i){
        if(color[i] == true){
            cout << "1";
        }else{
            cout << "0";
        }
    }
    cout << endl;
}