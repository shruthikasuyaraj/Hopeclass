#include<stdio.h>
#include<ctype.h>
int main(){
    long int t;
    scanf("%ld",&t);
    while(t--){
        char s1[4],s2[4];
        scanf("%s %s",s1,s2);
        char temp=s1[0];
        s1[0]=s2[0];
        s2[0]=temp;
    printf("%s %s\n",s1,s2);
    }
}

#include<stdio.h>
int main(){
    char s[1001];
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i=i+2){
        for(int j=2;s[j]!='\0';j=j+2){
            if((int)s[i]>(int)s[j]){
                int temp=(int)s[i];
                (int)s[i]=(int)s[j];
                (int)s[j]=temp;
            }
        }
    }
    printf("%s"s);
}
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

