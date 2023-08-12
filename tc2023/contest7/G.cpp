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

void solve(){
    int n;
    cin>>n;
    int lessons[n][5];
    int grupos = n/2;
    fore(i,0,n) fore(j,0,5) cin >> lessons[i][j];
    fore(i,0,5){
        fore(j,i+1,5){
            int d1=0,d2=0,inter=0;
            fore(k,0,5){
                if(lessons[k][i]) d1++;
                if(lessons[k][j]) d2++;
                if(lessons[k][j] && lessons[k][i]) inter++;
            }
            d1-=inter;
            d2-=inter;
            if(d1<=grupos && d2<=grupos && d1+d2+inter==n){
                cout<<"YES"<<'\n';
                return;
            }
        }
    } 
    cout<<"NO"<<'\n';
}
    

int main(){FIN;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}