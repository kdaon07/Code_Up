#include<stdio.h>

int main()
{
    int n, m, b, i;
    int a[10000001] = {};   // ���� �ʱ�ȭ
    scanf("%d", &n);    //
    for (i=0;i<n; i++)
    {
        scanf("%d", &b);
        a[b] = 1;   // �Է¹��� �迭�� 1�� ����
    }
    scanf("%d", &m);
    for (i=0;i<m; i++)
    {
        scanf("%d", &b);
        printf("%d ", a[b]);    // ����� ���ڶ�� 1 ���
    }

    return 0;

}
