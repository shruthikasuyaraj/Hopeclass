#include <stdio.h>

int main() {
   int n,k;
   scanf("%d $d",&n,&k);
   int a[n];
   for(int i=0;i<n;i++) scanf("%d",&a[i]);
   for(int i=0;i<k;i++){
        int temp=a[n-1];
        for(int j=n-1;j>0;j--) a[j]=a[j-1];
        a[0]=temp;
   }
   for(int i=0;i<n;i++) printf("%d ",a[i]);
   return 0;
}
