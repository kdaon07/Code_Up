#include <stdio.h>

int main()
{
    int n, i, j, count;
    int arr[100][100];

    scanf("%d", &n);
    count = n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[j][i] = count;
            if(j != n-1)
            {
                if(i%2 == 0)
                    count--;
                else if(i%2 == 1)
                    count++;
            }
        }
        count += n;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
