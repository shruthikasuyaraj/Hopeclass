#include<stdio.h>
int max(int x,int y)
{
    return((x>y)?x:y);
}

int main()
{
    int R,C;
    scanf("%d%d",&R,&C);
    int grid[R][C],dp[R][C];
    for(int row=0;row<R;row++)
    {
        for(int col=0;col<C;col++)
        {
            scanf("%d",&grid[row][col]);
        }
    }
    dp[0][0]=grid[0][0];
    //process the first row
    for(int col=1;col<C;col++)
    {
        dp[0][col]=dp[0][col-1]+grid[0][col];
    }
    //process the first col
    for(int row=1;row<R;row++)
    {
        dp[row][0]=dp[row-1][0]+grid[row][0];
    }
    for(int row=1;row<R;row++)
    {
        for(int col=1;col<C;col++)
        {
            dp[row][col]=max(dp[row-1][col],dp[row][col-1])+grid[row][col];
        }
    }
    printf("%d",dp[R-1][C-1]);
    return 0;
}
