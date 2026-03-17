#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int rooms[n];
    for(int i=0;i<n;i++){
        scanf("%d",&rooms[i]);
    }
    int j=0,sum=0,i=0;
    while(i < n && j < n){
        sum+=rooms[j];
        if(sum==k){
            printf("%d %d",i+1,j+1);
            return 0;
        }else if(sum>k){
            i++;
            j=i+1;
            sum=0;
        }else{
            j++;
        }
    }
}
