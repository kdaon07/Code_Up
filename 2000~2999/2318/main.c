#include <stdio.h>

int main()
{
    int m, n, i, j;
    scanf("%d", &m);
    int ai[m];
    for(i=0;i<m;i++)
        scanf("%d", &ai[i]);
    scanf("%d", &n);

    for(i=0;i<3;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0 && ai[j] < n)
                printf("%d ", ai[j]);
            if(i==1 && ai[j] == n)
                printf("%d ", ai[j]);
            if(i==2 && ai[j] > n)
                printf("%d ", ai[j]);
        }
    }
    return 0;
}
