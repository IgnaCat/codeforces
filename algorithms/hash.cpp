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

const ll m = 1e9+9;
const ll p = 31; // para minusculas, para mayusculas usar p=53
ll j=1,k=1;
ll x[200005];
ll hash_s1[200005]={0};
ll hash_s2[200005]={0};
ll h[200005]={0};
string s1,s2;


ll compute_hash(string const& s) {
    ll hash_value = 0;
    ll p_pow = 1;
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }
    return hash_value;
}

//Computo el hash entre el rango [i, j)
ll hash_range(int i, int j){
    return (hash_s1[j]-hash_s1[i])*x[(s1.size())-1];
}
//En cp-algo hacen asi
//long long cur_h = (h[i+S] + m - h[i]) % m;
//if (cur_h == h_s * p_pow[i] % m)

int main() {FIN;

    //Precomputo potencias en x
    x[0] = 1;
    fore(i,1,s1.size()) x[i] = (x[i-1] * p) % m;

    //Array de hash para los prefijos strings s1 y s2
    //Dos formas
    fore(i,0,s1.size())
        h[i+1] = (h[i] + (s1[i] - 'a' + 1) * x[i]) % m;

    for (char a : s2){
        hash_s2[j] = (hash_s2[j-1] + (a - 'a' + 1) * x[j]) % m;
        j++;
    }
	return 0;
}