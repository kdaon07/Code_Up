#include <stdio.h>

int main()
{
    int a, t, e, w;
    scanf("%d", &a);
    int n[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d ", &n[i]);
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("%d ", n[j]);
        }
        w = n[0];
        for(int j=0;j<a;j++)
        {
            n[j] = n[j+1];
        }
        n[a-1] = w;
        printf("\n");
    }
}
