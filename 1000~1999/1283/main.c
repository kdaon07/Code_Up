#include <stdio.h>

int main()
{
    float t=0, d=0, c;
    int b, a;
    scanf("%d", &a);
    t=a;
    scanf("%d", &b);
    for(int i=1;i<=b;i++)
    {
        scanf("%f", &c);
        d = c/100;
        t+=t*d;
    }
    printf("%.0f\n", -a+t);
    if(t>a) printf("good");
    else if(t<a) printf("bad");
    else if(t==a) printf("same");
    return 0;
}
