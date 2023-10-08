#include <stdio.h>

int main()
{
    int i, j, n, m, num = 1;
    int arr[101][101];
    int max, min;
    scanf("%d %d", &n, &m);

    for (i=1;i<=n+m-1;i++)
    {
        min = (i <= n) ? i : n;
        max = (i <= m) ? 1 : (i - m + 1);

        for (j=min;j>=max;j--)
            arr[j][i - j + 1] = num++;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}
