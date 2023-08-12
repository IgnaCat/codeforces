#include <iostream>

#include <bits/stdc++.h>

#include <map>

#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long ll;

typedef pair<ll, ll> ii;

typedef long long ull;


ull n, k, a;


ull miente(vector<ull> shoots, ull pivot){
    vector<ull> test;

    for(ull i=0; i<pivot; ++i){
        test.push_back(shoots[i]);
    }

    sort(test.begin(), test.end());

    ull last_shoot = 0;
    ull available = 0;

    for(ull i=0; i<test.size(); ++i){

        ull aux = ((test[i] - last_shoot) - 1);
        if(aux > 0){
            ++aux;
        }

        available += aux/(a+1);
        last_shoot = test[i];
    }

    available += ((n - last_shoot)+1) / (1+a);

    if(available >= k){
        return 0;
    }else{
        return 1;
    }

}


int main() {FIN;

    cin >> n >> k >> a;
    ull m;
    cin >> m;
    vector <ull> shoots(m, 0);

    for(ull i = 0; i<m; ++i){
        cin >> shoots[i]; 
    }

    if(miente(shoots, m) == 0){
        cout << -1 << endl;
        return 0;
    }

    ///////////////////

    ull left = 0;
    ull right = m; 
    ull pivot;
    while(right > left){
        pivot = (right+left)/2;
        //cout << "nuevo pivot : " << pivot << endl;
        // vector<ull> test(shoots.begin(), shoots.begin()+pivot);
        if(miente(shoots, pivot) == 0){
            left = pivot+1;
        }else{
            right = pivot;
        }
    }

    cout << right << endl;

}