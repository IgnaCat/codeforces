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
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> nums(n);
        input(nums);
        if(nums[0]+nums[1]>nums[n-1]){
            show(-1);
        }
        else{
            cout<<1<<" "<<2<<" "<<n<<'\n';
        }
    }
    return 0;
}