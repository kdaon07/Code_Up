#include <stdio.h>

int main()
{
    int i, j, n, m, num=1;
    scanf("%d %d", &n, &m);
    for(i=n*m;i>=m;i-=m)
    {
        num = i;
        for(j=1;j<=m;j++)
        {
            printf("%d ", num);
            num --;
        }
        printf("\n");
    }
    return 0;
}

