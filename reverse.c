#include <stdio.h>
int main() {
    int n.k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    reverse(a,0,k-1);
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
void reverse(int a[],int start,int end){
while(start<end){
    int temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    start++;
    end--;
}
    return 0;
}
