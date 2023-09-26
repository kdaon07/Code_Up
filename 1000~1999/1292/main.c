#include <stdio.h>

int main()
{
    int n, i, result=0;
    scanf("%d", &n);
    for(i=0;i<10;i++)
    {
        result += n % 10;
        n = n / 10;
    }
    if(result%7==4) printf("suspect");
    else printf("citizen");
    return 0;
}
