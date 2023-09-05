#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int lld;
typedef vector<lld> vi;
typedef pair<lld,lld> pi;
#define F first
#define S second
#define MOD 1000000007
#define PB push_back
#define MP make_pair
#define rep(i,a,b) for (lld i = a; i < b; i++)
lld r,j,l,x,y,m,n,s,f,q,i,z,p,k,d,t,u,e,g,w;string s1,s2,s3,s4;
lld power[1000009],hash1[1000009],prefix[1000009];
unordered_map<lld,lld>ma;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  cin>>s1>>s2>>k;
  unordered_map<char,lld>arr;
  rep(i,0,s2.size())
  {
    if(s2[i]=='0')
    {
      arr[(char)('a'+i)]=1;
    }
  }
  n=s1.size();
  power[0]=1;
  p=123;
  rep(i,1,n)
  {
    power[i]=(((p*power[i-1])));
  }
  hash1[0]=(s1[0]-'a'+1);
  rep(i,1,n)
  {
    hash1[i]=(hash1[i-1]+((s1[i]-'a'+1)*power[i]));
  }
  for(i=0;i<n;i++)
  {
    p=0;
    for(j=i;j<n;j++)
    {
      if(arr[s1[j]]==1)
      {
        p++;
      }
      if(p<=k)
      {
        lld hash=(hash1[j]-hash1[i-1]);
        hash=((hash*power[n-i+1]));
        ma[hash]++;
      }
    }
  }
  cout<<ma.size()<<'\n';
}