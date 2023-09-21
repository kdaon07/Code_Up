#include <stdio.h>

int main()
{
    int i, j, n, num=1;
    scanf("%d", &n);
    for(i=4;i>0;i--)
    {
        num = i;
        for(j=1;j<=n;j++)
        {
            printf("%d ", num);
            num += n;
        }
        printf("\n");
    }
    return 0;
}
