#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        vector<int> visited(n,0);
        int pos=0;
        visited[pos]=1;
        for(int i=0;i<n;i++){
            if(s[pos]=='R')pos++;
            else pos--;
            visited[pos]=1;
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(visited[i]>=1)count++;
        }
        cout << count << endl;
    }
    return 0;
}
