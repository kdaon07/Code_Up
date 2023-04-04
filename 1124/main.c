#include <stdio.h>

int main()
{
    int x, y;
    scanf("C%dH%d", &x, &y);
    x = x*12;
    printf("%d", x+y);

    return 0;
}
