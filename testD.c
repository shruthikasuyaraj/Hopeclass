#include<stdio.h>
#include<ctype.h>
int main(){
    int n,t;
    scanf("%d %d",&n,&t);
    int time[n],count=0,sum=0;
    for(int i=0;i<n;i++){
        scanf("%d ",&time[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(time[j]<time[i]){
                int temp=time[i];
                time[i]=time[j];
                time[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        sum+=time[i];
        if(sum>t){
            printf("%d",count);
            break;
        }else{
            count++;
        }
    }
    return 0;
}

