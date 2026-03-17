#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,steps=0;
    cin >> n >> k;
    int low=n,high=n;
    while(low>=k || high>=k){
		if(high==k || low==k){
            cout << steps << endl;
            return;
		}
        steps++;
        low/=2;
        high=(high+1)/2;
    }
    cout <<"-1"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--) solve();
}
