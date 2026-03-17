#include<stdio.h>
int main(){
    char wrd[1001];
    int n;
    scanf("%s%d",wrd,&n);
    for(int i=n-1;wrd[i]!='\0';i++){
        printf("%c",wrd[i]);
    }
    for(int i=0;i<n-1;i++){
        printf("%c",wrd[i]);
    }
    return 0;
}

