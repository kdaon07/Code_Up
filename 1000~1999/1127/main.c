#include <stdio.h>

int main()
{
    float a, c[4];
    int b;
    for(int i=1;i<4;i++)
    {
        scanf("%f %d", &a, &b);
        c[i] = a*b;
    }
    printf("%.1f", c[1]+c[2]+c[3]);
    return 0;
}
