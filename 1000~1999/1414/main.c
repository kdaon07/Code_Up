#include <stdio.h>

int main()
{
    int i, count1=0, count2=0;
    char str[100];
    scanf("%s", str);
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == 'C' || str[i] == 'c')
        {
            count1+=1;
            if(str[i+1] == 'C' || str[i+1] == 'c')
            {
                count2+=1;
            }
        }
    }

    printf("%d\n%d", count1, count2);
    return 0;
}
