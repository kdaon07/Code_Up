#include<stdio.h>

int main()
{
    char a;
    while(scanf("%c",&a) != EOF)
    {
        if(a>=97 && a<=122)
        {
            if(a - 3 <97)
                printf("%c",a + 23);
            else if(a - 3 >=97)
                printf("%c",a - 3);
        }
        if(a == ' ')
            printf(" ");
    }
    return 0;
}
