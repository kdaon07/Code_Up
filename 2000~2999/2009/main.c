#include <stdio.h>

int main()
{
    int a, b;
    int temp=0;
    scanf("%d %d", &a, &b);
    while(a>=b)
    {
        temp +=1;
        a -= b - 1;
    }
    printf("%d", temp);
    return 0;
}
