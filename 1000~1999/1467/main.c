#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j, num, map[100][100];
    scanf("%d %d", &n, &m);
    num = n * m;
    for(i=0;i<m;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            map[j][i] = num;
            num--;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }
    return 0;
}
