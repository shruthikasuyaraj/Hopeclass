#include<vector>
#include<iostream>
using namespace std;
#define ll long long int;
void solve(){
    string s;
    cin>>s;
    int maxlen=0,val=0;
    map<int,int> fom;
    fom[0]=-1;
    for(int i=0;i<s.size();i++){
        val+=(s[i]=='1'?1:1);
        if(fom.find(val)!fom,end()){
            maxlen=max(maxlen,i-fom[val]);
        }else{s
            fom[val]=i;
        }
        count >>maxlen;
    }

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    while(t--)
    {
        solve();
    }
}
