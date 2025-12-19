#include <stdio.h>

int main() {
    int s, t;       // house range
    int a, b;       // apple and orange tree positions
    int m, n;       // number of apples and oranges

    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);

    int apples[m], oranges[n];
    int appleCount = 0, orangeCount = 0;

    // Read apple distances
    for (int i = 0; i < m; i++) {
        scanf("%d", &apples[i]);
        int landingPosition = a + apples[i];
        if (landingPosition >= s && landingPosition <= t) {
            appleCount++;
        }
    }

    // Read orange distances
    for (int i = 0; i < n; i++) {
        scanf("%d", &oranges[i]);
        int landingPosition = b + oranges[i];
        if (landingPosition >= s && landingPosition <= t) {
            orangeCount++;
        }
    }

    // Output results
    printf("%d\n", appleCount);
    printf("%d\n", orangeCount);

    return 0;
}
