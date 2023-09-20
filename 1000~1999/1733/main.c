#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    scanf("%s", str);
    if(!strcmp("IOI", str))
        printf("IOI is the International Olympiad in Informatics.");
    else
        printf("I don't care.");
    return 0;
}
