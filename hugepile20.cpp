#include<bits/stdc++.h>
using namespace std;
set<int> vis;
bool found=false;
int ans=1000000009;
void find(int val,int target,int steps){
    if (val==target){
        found=true;
        ans=min(steps,ans);
        return;
    }
    if(val<target) return;
    if (found) return;
    vis.insert(val);
    int fh=val/2;
    int sh=(val+1)/2;

    find(fh,target,steps+1);
    if(fh!=sh){
        find(sh,target,steps+1);
    }
}
void solve(){
   int N,target;
   cin >> N >> target;
   ans=1000000009;
   found=false;
   vis.clear();
   find(N,target,0);
   if(!found){
   	cout << "-1" << endl;
   }else{
   	cout << ans << endl;
   }
}
int main(){
	int tc=1;
	cin >> tc;
	while(tc--) solve();
}
