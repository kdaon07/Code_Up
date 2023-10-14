#include <stdio.h>

int main()
{
    int n, m, max=0, min=100, i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &m);
        if(max<m) max = m;
        if(min>m) min = m;
    }

    printf("%d %d", max, min);
    return 0;
}
