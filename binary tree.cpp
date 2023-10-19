#include <stdio.h>
#include <limits.h>
#define MAX_KEYS 10

int optimalBST(int keys[], int freq[], int n) {
	int i,j,L,r,k;
    int dp[MAX_KEYS][MAX_KEYS] = {0};

    for (i = 0; i < n; i++) {
        dp[i][i] = freq[i];
    }

    for (L = 2; L <= n; L++) {
        for (i = 0; i <= n - L + 1; i++) {
            int j = i + L - 1;
            dp[i][j] = INT_MAX;

            int sum = 0;
            for (k = i; k <= j; k++) {
                sum += freq[k];
            }

            for (r = i; r <= j; r++) {
                int cost = sum + (r > i ? dp[i][r - 1] : 0) + (r < j ? dp[r + 1][j] : 0);
                if (cost < dp[i][j]) {
                    dp[i][j] = cost;
                }
            }
        }
    }

    return dp[0][n - 1];
}

int main() {
    int keys[MAX_KEYS];
    int freq[MAX_KEYS];
    int i,j,n;

    printf("Enter the number of keys (maximum %d): ", MAX_KEYS);
    scanf("%d", &n);

    printf("Enter the keys in ascending order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &keys[i]);
    }

    printf("Enter the corresponding frequencies:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &freq[i]);
    }

    int cost = optimalBST(keys, freq, n);
    printf("The cost of the optimal binary search tree is: %d\n", cost);

    return 0;
}
