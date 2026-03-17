#include<stdio.h>
int main(){
    char wrd[1001];
    int n,st;
    scanf("%s%d",wrd,&n);
    scanf("%d",&st);
    st--;
    for(int i=st;i<st+n;i++){
        printf("%c",wrd[i%n]);
    }
    return 0;
}

