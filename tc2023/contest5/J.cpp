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
const ll p = 31;
ll j=1,k=1;
ll x[200005];
ll hash_s1[200005]={0};
ll hash_s2[200005]={0};
string s1, s2;

ll hash1(int i, int j){
    return (hash_s1[j]-hash_s1[i])*x[(s1.size())-1];
}

ll hash2(int i, int j){
    return (hash_s2[j]-hash_s2[i])*x[(s1.size())-1];
}


// bool f(int l1, int r1, int l2, int r2){
//     if (hash1(l1-1,r1) == hash2(l2-1,r2)) return true;
//     if((r1-l1)%2==0) return false;    
//     int n1 = (r1-l1+1)/2;
//     int n2 = (r2-l2+1)/2;

//     return ((f(l1,l1+n1-1,l1+n1,r1) && f(l2,l2+n2-1,l2+n2,r2)) || 
//            (f(l1,l1+n1-1,l2+n2,r2) && f(l2,l2+n2-1,l1+n1,r1)));
// }


bool f(string a,string b)
{
    if(a==b) return true;
    int size = a.size();
    if(size%2==1) return false;
    
    string a1,a2,b1,b2;
    a1=a.substr(0,size/2);
    a2=a.substr((size/2),(size/2));
    b1=b.substr(0,size/2);
    b2=b.substr((size/2),(size/2));

    if(f(a1,b2)) return f(a2,b1);
    else if(f(a1,b1)) return f(a2,b2);

    return false;
}

int main() {FIN;
    cin >> s1 >> s2;

    // fore(i,0,s1.size()){
    //     x[i] = p*i % m;
    // }

    // for (char a : s1){
    //     hash_s1[k] = (hash_s1[k-1] + (a - 'a' + 1) * x[k]) % m;
    //     k++;
    // }

    // for (char a : s2){
    //     hash_s2[j] = (hash_s2[j-1] + (a - 'a' + 1) * x[j]) % m;
    //     j++;
    // }

    if (f(s1,s2)){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }


	return 0;
}   