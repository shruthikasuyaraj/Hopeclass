#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int pos = 31; pos >= 0; pos--) {
        if(n & (1 << pos)) {
            printf("%d ", 1 << pos);
        }
    }
    return 0;
}
