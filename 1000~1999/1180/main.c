#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    b = a/10;
    c = (a%10) * 10;

    printf("%d %d %d\n", a, b, c);
    a = b + c;
    a = a * 2;
    if(a>=100) a -= 100;
    printf("%d\n", a);

    if(a<=50) printf("GOOD");
    else printf("OH MY GOD");

    return 0;
}
