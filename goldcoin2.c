#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int rooms[n];
    for(int i=0;i<n;i++){
        scanf("%d",&rooms[i]);
    }
    int j=0,sum=0;
    for(int i=0;i<n;i++){
        sum+=rooms[i];
        while(sum>k && j<i){
            sum-=rooms[j];
            j++;
        }
        if(sum == k){
            printf("%d %d",j+1,i+1);
            break;
        }
    }
    return 0;
}
