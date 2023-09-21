#include <stdio.h>

int main()
{
    int i;
    char str[20], a, b;
    for(i=0;i<4;i++)
    {
        if(i==3) {
            if(b != a)
            {
                printf("bad");
                return 0;
            }
            continue;
        }
        scanf("%s", str);
        if(i==0) {
            b=str[strlen(str)-1];
            a = str[0];
            continue;
        }
        if(b != str[0]) {
            printf("bad");
            return 0;
        }
        b=str[strlen(str)-1];
    }
    printf("good");
    return 0;
}
