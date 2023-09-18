#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i == 0 && j == 0 || i == 0 && j == n-1 || i == m-1 && j == 0 || i == m-1 && j == n-1)
                printf("+");
            else if(i == 0 || i == m-1)
                printf("-");
            else if(j == 0 || j == n-1)
                printf("|");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
