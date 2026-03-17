#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    long long x = *(long long *)a;
    long long y = *(long long *)b;
    return (x > y) - (x < y);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        long long a[n];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }

        qsort(a, n, sizeof(long long), cmp);

        long long mex = 0;
        for (int i = 0; i < n; i++) {
            if (i > 0 && a[i] == a[i - 1])
                continue;   // skip duplicates

            if (a[i] <= mex)
                mex++;
            else
                break;
        }

        printf("%lld\n", mex);
    }
    return 0;
}
