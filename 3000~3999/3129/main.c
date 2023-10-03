#include <stdio.h>

int main()
{
    int a = 0, b = 0, i;
    char str[50000];
    scanf("%s", str);

    for(i=0;i<strlen(str);i++)
    {
        if(str[i] == '(')
            a++;
        else if(str[i] == ')')
            b++;

        if(a < b)
        {
            printf("bad");
            return 0;
        }
    }

    if(a == b)
        printf("good");
    else
        printf("bad");
    return 0;
}
