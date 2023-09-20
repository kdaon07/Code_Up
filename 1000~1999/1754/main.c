#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    if(strlen(str1) > strlen(str2)) {
        printf("%s %s", str2, str1);
    }
    else if(strlen(str1) < strlen(str2)) {
        printf("%s %s", str1, str2);
    }
    else {
        for(int i=0;i<strlen(str1);i++)
        {
            if(str1[i] > str2[i])
            {
                printf("%s %s", str2, str1);
                return 0;
            }
            else if(str1[i] < str2[i])
            {
                printf("%s %s", str1, str2);
                return 0;
            }
        }
    }
    return 0;
}
