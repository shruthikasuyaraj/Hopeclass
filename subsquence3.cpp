#include<vector>
#include<iostream>
using namespace std;
#define ll long long int
void solve()
{
    string s;
    cin>>s;
    vector<int> lt(26,0),rt(26,0);
    for (char ch:s){
        rt[ch-'a']++;
    }
    ll count=0LL;
    for (int i=0;i<s.size();i++)
    {
        rt[s[i]-'a']--;
        for(int alp=0;alp<26;alp++)
        {
          count+=(lt[alp]*rt[alp]);
        }
        lt[s[i]-'a']++;
    }
    cout<<count;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    while(t--)
    {
        solve();
    }
}
