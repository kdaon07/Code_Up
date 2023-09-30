#include <stdio.h>

int main() {
    int b, n, num[21];;
    scanf("%d", &b);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    int dp[35001] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = b; j >= num[i]; j--) {
            dp[j] = (dp[j] > dp[j - num[i]] + num[i]) ? dp[j] : dp[j - num[i]] + num[i];
        }
    }

    printf("%d", dp[b]);
    return 0;
}
