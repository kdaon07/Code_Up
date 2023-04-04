#include <stdio.h>

int main()
{
    int h, w, n;
    int i, j;
    scanf("%d %d", &h, &w);
    scanf("%d", &n);
    int l[n], d[n], x[n], y[n];
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d %d", &l[n], &d[n], &x[n], &y[n]);
    }

    for(i=0;i<h; i++)
    {
        for(j=0;j<w; j++)
        {
            if(x[j]==j && y[i]==i) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
}
