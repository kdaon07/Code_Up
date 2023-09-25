#include <stdio.h>

int main()
{
    int i;
    char talk[1000];

    gets(talk);
    for(i=strlen(talk)-1;i>=0;i--)
    {
        printf("%c", talk[i]);
    }

    return 0;
}
