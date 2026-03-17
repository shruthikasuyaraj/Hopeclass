#include<bits/stdc++.h>
using namespace std;
int main(){
    int len,k;
    cin >> len >> k;
    vector<int> nums(len);
    for(int i=0;i<len;i++){
        cin >> nums[i];
    }
    int left=0,right=0,currsum=nums[left],count=0;
    while(left<len && right<len){
        if(currsum == k) count++;
        if(currsum>=k){
            currsum-=nums[left];
            left++;
        }else{
            currsum+=nums[right];
            right++;
        }
    }
    cout << count;
    return 0;
}
