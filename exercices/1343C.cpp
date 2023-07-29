#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define fst first
#define snd second
//#define DEBUG(s) {cerr<<"#########"#s>>''} 
using namespace std;
typedef long long ll;
ll sgn(ll x){
    if (x >= 0){
        return 1;
    } else if (x < 0){
        return -1;
    } else {
        return 0;
    }
}

ll maximo(ll a[], ll index, ll last_index){
    ll max = 0;
    fore(i,index,last_index){
        if (a[i] > max){
            max = a[i];
            }
        }
    return max;
}

ll minimo(ll a[], ll index, ll last_index){
    ll min = a[index];
    fore(i,index+1,last_index){
        if (a[i] > min){
            min = a[i];
            }
        }
    return min;
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin >> t;
    fore(i,0,t){
        ll n, max, res=0;
        cin >> n;
        ll a[n];
        fore(j,0,n){
            cin >> a[j];
        }
        ll index = 0;
        ll last_index=0;
        fore(j,0,n){
            if (sgn(a[index]) == sgn(a[j])){
                last_index++;
            }
            else{
                if (sgn(a[index]) == 1){
                    max = maximo(a, index, last_index);
                }
                else{
                    max = minimo(a, index, last_index);
                }
                res += max;
                index = last_index;
                last_index = index+1;
            }
            if (j == n-1){
                if (sgn(a[index]) == 1){
                    max = maximo(a, index, last_index);
                }
                else{
                    max = minimo(a, index, last_index);
                }
                res += max;
            }
        }
        cout << res << "\n";
    }
    return 0;
}



