#include<vector>
#include<iostream>
using namespace std;
#define ll long int;
void solve()
{
int N,W,curr;
cin>>N>>W;
vector<ll>msum(W+W,0LL),pref(3*W,0LL);
for(int ctr=1;ctr<=N;ctr++)
{
    cin>>curr;
    msum[ctr%(W+W)]+=curr;
}
for(int i=0;i<W;i++)
{
    msum.push_back(msum[i]);
}
pref[0]=msum[0];
for(int i=1;i<3*W;i++)
{
  pref[i]=pref[i-1]+msum[i];
}
ll minv=pref[W-1];
for(int st=1;st<2*W;st++)
{
  minv=min(minv,pref(st+W-1)-pref[st-1])
}
cout<<minv<<endl;
}
