#include <stdio.h>

int main()
{
    int i, j, n, num=1;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ", num);
            if((i+1)%2==1 && j+1<n) num++;
            else if(j+1<n) num--;
        }
        printf("\n");
        num+=n;
    }
    return 0;
}
