#include <stdio.h>

int main()
{
    int m, n, i, j;
    scanf("%d%d", &m, &n);
    int count[m + 1], num[n];
    count[0] = 0;
    for (i=0;i<n;i++)
        scanf("%d", &num[i]);

    for (i=1;i<=m;i++)
    {
        count[i] = m + 1;
        for (j=0;j<n;j++)
            if (num[j] <= i)
                count[i] = (count[i] < count[i - num[j]] + 1) ? count[i] : count[i - num[j]] + 1;
    }

    printf("%d", count[m]);

    return 0;
}
