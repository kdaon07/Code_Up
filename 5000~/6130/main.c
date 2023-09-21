#include <stdio.h>
// 파이썬 전용 문제라서 제출 x
int main() {
    int a, b;
    scanf("%dx+%d", &a, &b);

    float c = (float)-b / (float)a;
    printf("%.2f", c);

    return 0;
}
