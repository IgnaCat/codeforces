#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
 
int cmp(const void * a, const void * b){
    if(((pair<ll,ll>*)a)->first > ((pair<ll,ll>*)b)->first){
        return 1;
    }else if(((pair<ll,ll>*)a)->first < ((pair<ll,ll>*)b)->first){
        return -1;
    }else{
        if(((pair<ll,ll>*)a)->second > ((pair<ll,ll>*)b)->second){
            return 1;
        }else if(((pair<ll,ll>*)a)->second < ((pair<ll,ll>*)b)->second){
            return -1;
        }
    }
    return 0;
}
typedef struct elem{
    bool prime;
    vector <pair<ull, ull>> desc; 
}element;
#define K (ull)1e7
ull elevate(ull base, ull exp){
    ull mult = 1; 
    for(ull j=0; j<exp; j++){
        mult *= base;
    }
    return mult;
}
 
int main(int argc, char const *argv[])
{
    set<ull> gustan;
    set<ull> disgustan;
    ull n;
    cin >> n;
    ull flag = 1;
    while(n--){
        ull t;
        ull s;
        cin >> t >> s;
        if(t == 1){ //likes
            if(flag == 1){
                while(s--){
                    ull aux;
                    cin >> aux;
                    gustan.insert(aux);
                }
                    flag = 0;
            }else{
                set <ull> aux;
                while(s--){
                    ull aux2;
                    cin >> aux2;
                    aux.insert(aux2);
                }
                set <ull> result;
                set_intersection(aux.begin(), aux.end(), gustan.begin(), gustan.end(), inserter(result, result.begin()));
                gustan = result;
            }
        }else{
            while(s--){
                ull aux;
                cin >> aux;
                disgustan.insert(aux);
            }
        }
    }
    if(flag == 1){
        cout << 1000000000000000000ull-disgustan.size() << endl;
    }else{
        for(ull it : disgustan){
            gustan.erase(it);
        }
        cout << gustan.size() << endl;
 
    }
}