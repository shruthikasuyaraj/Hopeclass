#include<bits/stdc++.h>
using namespace std;
int main(){
    int R,C;
    cin>>R>>C;
    vector<vector<bool>>vis(R,vector<bool>(C,false));
    queue<array<int,3>>q;
    vector<string>grid(R);
    for(int row=0;row<R;row++){
        cin>>grid[row];
        for(int col=0;col<C;col++){
            if(grid[row][col]=='R'){
                q.push({row,col,0});
                vis[row][col]=true;
            }
        }
    }
    int rd[]={-1,-1,-1,0,0,1,1,1};
    int cd[]={-1,0,1,-1,1,-1,0,1};
    while(!q.empty()){
        auto cell=q.front();
        q.pop();
        for(int i=0;i<8;i++){
            int ar=cell[0]+rd[i],ac=cell[1]+cd[i];
            if(ar>=0&&ar<R&&ac>=0&&ac<C&&grid[ar][ac]!='B'&&!vis[ar][ac]){
                if(grid[ar][ac]=='C'){
                    cout<<cell[2]+1<<"\n";
                    return 0;
                }
                q.push({ar,ac,cell[2]+1});
                vis[ar][ac]=true;
            }
        }
    }
    cout<<"-1"<<"\n";
    return 0;
}
