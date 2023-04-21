#include <stdio.h>

int main()
{
    int a[6], i;
    int t = 10000;
    for(i=1; i<6; i++)
    {
        scanf("%1d", &a[i]);
    }
    for(i=1; i<6; i++)
    {
        printf("[%d]\n", a[i]*t);
        t = t/10;

    }

    return 0;
}
