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

priority_queue<int, vector<int>, greater<int>> pq;
vector<string> ans;

int main() {FIN;
     int n;
     cin >> n;
     fore(i,0,n){
        string query; int x;
        cin >> query;
        if (query=="insert"){
            cin >> x;
            pq.push(x); 
            ans.pb(query + " " + to_string(x));
        } 
        else if (query=="getMin"){
            cin >> x;
            while(!pq.empty() && pq.top()<x){
                pq.pop();
                ans.pb("removeMin");
            } 
            if (pq.empty() || pq.top() > x) pq.push(x), ans.pb("insert " + to_string(x));
            ans.pb(query + " " + to_string(x));
        }
        else if (query=="removeMin"){
            if (pq.empty()) ans.pb("insert 0"), pq.push(0);
            pq.pop();
            ans.pb(query);
        }   
        
     }
     cout << ans.size() << '\n';
     for (auto s : ans) cout << s << '\n';
	return 0;
}