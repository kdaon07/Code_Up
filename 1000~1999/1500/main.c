#include <stdio.h>

int main()
{
    int arr[100][100];
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d", &arr[i][j]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
