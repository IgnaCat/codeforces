#include <bits/stdc++.h>
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define forn(a,b,c) for(unsigned int a=b; a<c;++a)
#define show(a) cout<<a<<"\n"
#define showAll(a) for(auto i:a) cout<<i<<" ";cout<<"\n"
#define input(a) for(auto& i:a) cin>>i
#define all(a) a.begin(),a.end()
#define DGB(a) cout<<#a<<" = "<<a<<"\n"
#define RAYA cout<<"=============="<<"\n"
#define pii pair<int,int>
#define MAXN 26
#define fst first
#define snd second
using namespace std;
typedef long long ll;
typedef unsigned int ui;
int main(){
    FIN;
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> prices(n);
    input(prices);
    m--;
    int l=m-1,r=m+1,res=10,resr=10,restot;
    while((l>=0 && (prices[l]>k||prices[l]==0))){
        res+=10;
        l--;
    }
    while(r<n && ((prices[r]>k)||prices[r]==0)){
        resr+=10;
        r++;
    }
    if(l<0){
        restot=resr;
    }
    else if(r>=n){
        restot=res;
    }
    else{
        restot=min(res,resr);
    }
    show(restot);
    return 0;
}