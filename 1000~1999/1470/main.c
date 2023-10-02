#include <stdio.h>

int main()
{
    int n, count=1, i, j;
    int arr[100][100];

    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[j][i] = count;
            if(j != n-1)
            {
                if(i%2==0) count++;
                else if(i%2==1) count--;
            }
        }
        count+=n;
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
