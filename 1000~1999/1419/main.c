#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0;
    char str[100];
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='l')
            if(str[i+1]=='o' && str[i+2]=='v' && str[i+3]=='e')
                count++;
    }
    printf("%d", count);
    return 0;
}
