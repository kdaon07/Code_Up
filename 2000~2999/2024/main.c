#include <stdio.h>
#include <string.h>

int main() {
    char str2[] = "�����̻�����ĥ�ȱ�";
    char n[11];

    scanf("%s", n);

    int len = strlen(n);

    for (int i = 0; i < len; i++) {
        int digit = n[i] - '0'; // �Էµ� ���ڸ� ���ڷ� ��ȯ

        // ���ڰ� 0�� �ƴ� ��� �ѱ۷� ���
        if (digit != 0) {
            printf("%c", str2[digit]); // str2 �迭���� �ѱ� ���ڸ� ������ ���
        }

        // ���ڰ� 0�� ��� �ش� �ڸ����� ���� ���
        if (digit != 0 || (i == len - 1)) {
            switch ((len - i - 1) % 4) {
                case 0: printf("õ"); break;
                case 1: printf("��"); break;
                case 2: printf("��"); break;
            }
        }
    }

    return 0;
}
