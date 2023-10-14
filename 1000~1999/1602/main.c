#include <stdio.h>

void ABS(double n)
{
    if(n<0) n = -n;
    printf("%g", n);
}

int main()
{
    double n;
    scanf("%f", &n);

    ABS(n);
    return 0;
}
