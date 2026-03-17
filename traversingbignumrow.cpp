#include<vector>
#include<iostream>

using namespace std;
#define ll long long int;
void solve()
{
    int R,C;
    cin>>R>>C;
    vector<vector<int>> grid(R,vector<int>(C)),dp(R,vector<int>(C));
    for( int row=0;row<R;row++)
    {
        for(int col=0;col<C;col++)
        {
            cin>>grid[row][col];
            if(row==0)
            {
                dp[row][col]=grid[row][col];
            }
        }
    }
    auto fsmax=[&](int row)
    {
        int fmax=-1,smax=-1;
        for(int col=0;col<C;col++)
        {
            if(dp[row][col]>fmax)
            {
                smax=fmax;
                fmax=dp[row][col];
            }
            else
            {
                smax=max(smax,dp[row]);
            }
        }
    };
    for(int row=1;row=R;row++){
        autop=fsmax(row-1);
        for(int col=0;col<C;col++){
            if(dp[row -1][col]==p.first){
                dp[row][col]=p.second+grid[row][col];
            }else{
                dp[row][col]=p.first+grid[row][col];
            }
        }
    }
    auto p=fmax(R-1);
    cout << p.first;
}
int main(){
    ios_base::sync_with_stdio(0);
    solve();
    return 0;
}
