#include<iostream>
#include<cctype>
using namespace std;
int main() {
    string s;
    cin >> s;
    int v=0,c=0;
    for(int i=0;i<s.length();i++) {
        char ch=tolower(s[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch == 'u') cout << ch;
    }
    return 0;
}
