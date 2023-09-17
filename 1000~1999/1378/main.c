#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, temp = 0;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            temp += j;
        }
    }

    printf("%d", temp);
    return 0;
}
