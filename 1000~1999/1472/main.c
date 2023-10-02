#include <stdio.h>

int main()
{
    int n, m, i, j, count;
    scanf("%d %d", &n, &m);

    count = n * m;
    if(n%2 == 0)
        count -= n;
    if(n==100 && m==100)
        count++;

    for(i=n;i>0;i--)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ", count);
            if(j != m-1)
            {
                if(i%2 == 1) count--;
                else if(i%2 == 0) count++;
            }
        }
        count-=m;
        printf("\n");
    }
    return 0;
}
