#include<stdio.h>
int main(){
    char s[1001];
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i=i+2){
        for(int j=2;s[j]!='\0';j=j+2){
            int a=s[i],b=s[j];
            if(a>b){
                s[i]=b;
                s[j]=a;
            }
        }
    }
    printf("%s",s);
}
