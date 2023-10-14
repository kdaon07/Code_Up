#include <stdio.h>

int main() {
    int n[10];
    int i, j, r;

    for (i = 0; i < 10; i++)
        scanf("%d", &n[i]);

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (n[j] < n[j + 1]) {
                int temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

    printf("%d\n", n[2]);

    return 0;
}
