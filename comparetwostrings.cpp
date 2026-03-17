#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    string s1,s2;
    cin >> s1;
    cin >> s2;
    int l1=s1.length()+1;
    int l2=s2.length()+1;l
    vector<vector<int>> mat(l1, vector<int>(l2, 0));
    int maxlen=0;
    for(int row=1;row<l1;row++){
        for(int col=1;col<l2;col++){
            if(s1[row-1]==s2[col-1]){
                mat[row][col]=1+(mat[row-1][col-1]);
                maxlen=max(maxlen,mat[row][col]);
            }
        }
    }
    cout << maxlen;
    return 0;
}
