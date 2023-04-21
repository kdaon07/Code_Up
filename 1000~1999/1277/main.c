#include <stdio.h>

int main()
{
    int a, b[1000], c;
    scanf("%d", &a);
    if(a==1)
    {
        scanf("%d", &a);
        printf("%d %d %d", a, a, a);
        return 0;
    }
    for(int i=1;i<=a;i++)
    {
        scanf("%d", &b[i]);

    }
    c=(a+1)/2;
    printf("%d %d %d", b[1], b[c], b[a]);
}
