#include <stdio.h>
#include <string.h>

int main()
{
    int i, size, a;
    char num[10];
    char num2[5] = "¾ï¸¸Ãµ¹é½Ê";
    char num1[9] = "ÀÏÀÌ»ï»ç¿ÀÀ°Ä¥ÆÈ±¸";

    scanf("%s", num);
    size = strlen(num);
    printf("%s", num2);
    for (i = 0; i < size; i++)
    {
        a = num[i] - '0';
        printf("%d\n", a);
        printf("%c", num1[a - 1]);
    }

    printf("\n");

    return 0;
}
