#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("secret.dic", "r"); // �б� ������� ����

    if (file == NULL) // ���� ���� ����
        printf("������ �� �� �����ϴ�.");
        return 1;

    char c;

    while ((c = fgetc(file)) != EOF) // ���� ������ �ݺ�
        putchar(c); // ���ڸ� ���

    fclose(file); // ������ ����

    return 0;
}
