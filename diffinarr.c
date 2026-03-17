#include <stdio.h>

int main() {
    int n,val;
    scanf("%d %d",&n,&val);
    int nums[n];
   for(int i=0;i<n;i++){
       scanf("%d",&nums[i]);
   }
   int left=0,right=1;
   while(nums[left] != '\0'){
       if(val>nums[left]){
           continue;
       }else{
           int diff=val-nums[left];
           while(nums[right] !='\0'){
               if(nums[right]!=diff){
                   right++;
               }else{
                   printf("%d %d",left,right);
                   return 0;
               }
           }
       }
       right=left+1;
       left++;
   }
    return 0;
}
