#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    int a = n - 1;
    for(i=0;i<n;i++)
    {
        for(j=a;j>0;j--)
        {
            printf(" ");
        }
        a--;
        printf("*");
        for(j=0;j<i*2;j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    a++;
    for(i=n;i>0;i--)
    {
        for(j=a;j>0;j--)
        {
            printf(" ");
        }
        a++;
        printf("*");
        for(j=0;j<(i-1)*2;j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}
