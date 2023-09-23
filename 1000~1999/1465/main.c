#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int num = n * m;
    int step = m;
    int start = num - step + 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", start + j);
        }
        printf("\n");
        start -= step;
    }

    return 0;
}
