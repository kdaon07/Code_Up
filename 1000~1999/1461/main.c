#include <stdio.h>

int main()
{
    int i, j, n, num=1;
    scanf("%d", &n);
    for(i = 1; i<=n; i++)
    {
        num = i * n;
        for(j = num; j>num-n; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
