#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);    // �Է�
    int arr[50][50] = {0};  // �迭 �ʱ�ȭ
    int num = 1;
    int x = 0, y = n / 2;   // �ʱ� ����
    int nextx, nexty;
    while (num <= n * n)
    {
        arr[x][y] = num++;  // arr�� �߰��� num����

        // ���� x, y��ǥ ����
        nextx = (x - 1 + n) % n;
        nexty = (y + 1) % n;

        // ���� ��ǥ�� ���� ���̶��
        if (arr[nextx][nexty] == 0)
        {
            x = nextx;
            y = nexty;
        }
        else    // �ƴ϶�� ���� ������
            x = (x + 1) % n;
    }

    // ���
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}
