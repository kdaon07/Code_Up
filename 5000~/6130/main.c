#include <stdio.h>
// ���̽� ���� ������ ���� x
int main() {
    int a, b;
    scanf("%dx+%d", &a, &b);

    float c = (float)-b / (float)a;
    printf("%.2f", c);

    return 0;
}
