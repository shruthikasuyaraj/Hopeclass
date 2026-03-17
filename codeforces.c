#include <stdio.h>

int main() {
    int d, sumTime;
    scanf("%d %d", &d, &sumTime);

    int minTime[31], maxTime[31];
    int schedule[31];

    int minSum = 0, maxSum = 0;

    for (int i = 0; i < d; i++) {
        scanf("%d %d", &minTime[i], &maxTime[i]);
        minSum += minTime[i];
        maxSum += maxTime[i];
        schedule[i] = minTime[i];  // start with minimum
    }

    // Check feasibility
    if (sumTime < minSum || sumTime > maxSum) {
        printf("NO\n");
        return 0;
    }

    printf("YES\n");

    int remaining = sumTime - minSum;

    // Distribute remaining hours greedily
    for (int i = 0; i < d && remaining > 0; i++) {
        int canAdd = maxTime[i] - minTime[i];
        int add = (remaining < canAdd) ? remaining : canAdd;
        schedule[i] += add;
        remaining -= add;
    }

    // Output result
    for (int i = 0; i < d; i++) {
        printf("%d ", schedule[i]);
    }
    printf("\n");

    return 0;
}
