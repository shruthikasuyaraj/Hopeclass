#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

void solve(){
    int N;
    cin>>N;
    vector<int> arr(N),lis(N,1);
    for(int i=0;i<N;i++) cin<<arr[i];
    for(int i=1;i<N;i++){
        for(int ci=1;ci<N;ci++){
                if(arr[ci]<arr[i]){
                    lis[i]=max(lis[i],lis[ci]+1);
                }
        }
    }
    cout<< *max_element(lis.begin(),lis.end());
}
