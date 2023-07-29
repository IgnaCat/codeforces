#include <iostream>
#include <bits/stdc++.h>
#define fore(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define fst first
#define snd second
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;


bool check(vector<ll> &num_tasks, ll n, ll t){
    ll incomp = 0, comp=0;
    fore(i,0,n){
        if(num_tasks[i] > t){
            incomp += num_tasks[i] - t;
        }
        else {
            comp += (t-num_tasks[i])/2;
        }
    }
    return incomp <= comp;
}


int main() {FIN;
    ll t;
    cin >> t;
    fore(i,0,t){
        ll n, m, ans=0;
        cin >> n >> m;
        ll a[m];
        fore(j,0,m){ cin >> a[j]; --a[j];}
        vector<ll> num_tasks(n,0);
        fore(j,0,m){ ++num_tasks[a[j]];};
        ll l = 0, r = 2*m;
        while(l <= r){
            ll mid = (l+r)/2;
            if(check(num_tasks,n,mid)){
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        cout << ans << "\n";
    }
    
	return 0;
}