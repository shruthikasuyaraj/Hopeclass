#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>max) max=a[i];
    }
    int freq[max+1];
    for(int i=0;i<max;i++) freq[i]=0;
    for(int i=0;i<n;i++) freq[a[i]]++;
    for(int i=0;i<max+1;i++){
        if(freq[i]!=0) printf("%d - %d times\n",i,freq[i]);
    }
}

10 15
4 3 7 14 18 1 18 4 8 3
