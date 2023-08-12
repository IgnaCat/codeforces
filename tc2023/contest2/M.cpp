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
        string txt;
        cin >> txt;
        string txtOr = txt;
        reverse(txt.begin(), txt.end());
        cout << txtOr+txt << endl;
 
    }