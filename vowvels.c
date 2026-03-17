#include<stdio.h>
#include<ctype.h>
int main(){
    char s[10001],output[10001];
    long long int ind=0;
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' || s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ){
            continue;
        }else{
            output[ind++]='.';
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
                char ch=tolower(s[i]);
                output[ind++]=ch;
            }else{
                char ch=s[i];
                output[ind++]=ch;
            }
        }
    }
    printf("%s",output);
}
