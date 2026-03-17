#include <stdio.h>

int main() {
   int n,k;
   scanf("%d %d",&n,&k);
   int a[n];
    k=k%n;
   for(int i=0;i<n;i++)
       scanf("%d",&a[i]);

   for(int i=0;i<k;i++){
        int temp = a[0];
        for(int j=0;j<n-1;j++)
            a[j] = a[j+1];
        a[n-1] = temp;
   }

   for(int i=0;i<n;i++)
       printf("%d ",a[i]);

   return 0;
}
