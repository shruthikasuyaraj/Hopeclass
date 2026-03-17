#include<iostream>
#include<stack>
using namespace std;
#define ll long long int

void solve(){
    int N,curr;
    cin >> N;
    stack<int> stk;
    for(int ctr=1;ctr<=N;ctr++){
        cin >> curr;
        if(!stk.empty() && stk.top()==curr){
            stk.pop();
            continue;
        }
        stk.push(curr);
    }
    cout << stk.size();
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


