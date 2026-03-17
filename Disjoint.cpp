#include<bits/stdc++.h>
using namespace std;
int findldr(vector<int>& ldr,int node){
    if(ldr[node]==node){
        return node;
    }
    ldr[node]=findldr(ldr,ldr[node]);
    return ldr[node];
}
int main(){
    int N,Q;
    cin>>N>>Q;
    vector<int> ldr(N+1);
    for(int id=1;id<=N;id++) ldr[id]=id;
    for(int q=0;q<Q;q++){
        int lt,rt;
        cin>>lt>>rt;
        ldr[findldr(ldr,lt)]=findldr(ldr,rt);
    }
    for(int node=1;node<=N;node++){
        cout<<findldr(ldr,node)<<"\n";
    }
    return 0;
}
