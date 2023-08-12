/*************************************************************************
    > File Name: e.cpp
    > Author: Beans
    > Mail: [email protected] 
    > Created Time: 2023/5/22 21:09:48
 ************************************************************************/
#include <iostream>
#include <algorithm>
#define int long long
#define endl '\n'

using namespace std;

int n, f[300030][15];
int l;

int lowbit(int x){
	return x & -x;
}

void add(int x, int y){
	while(x <= n){
		f[x][l] += y;
		x = x + lowbit(x);
	}
}

int query(int x){
	int ans = 0;
	while(x > 0){
		ans += f[x][l];
		x = x - lowbit(x);
	}
	return ans;
}

int k;
signed main(){
	cin >> n >> k;
	k ++ ;
	for(int i = 1; i <= n; i ++ ){
		int x;
		cin >> x;
		for(int j = 1; j <= k; j ++ ){
			int ans;
			l = j - 1;
			if(l == 0)	ans = 1;
			else	ans = query(x - 1);
			l ++ ;
			add(x, ans);
		}
	}
	l = k;
	cout << query(n) << endl;
}

   	 	  		    			 	 		 	   	 		