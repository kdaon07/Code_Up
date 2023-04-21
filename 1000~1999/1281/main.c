#include <stdio.h>

int main()
{
    int a, b, c=0;
    scanf("%d %d", &a, &b);
    for(int i=a;i<=b;i++)
    {
        if(i%2==0){
            c-=i;
            printf("-%d", i);
        }
        else{
            c+=i;
            if(i==a) printf("%d", i);
            else printf("+%d", i);
        }
    }
    printf("=%d", c);
    return 0;
}
