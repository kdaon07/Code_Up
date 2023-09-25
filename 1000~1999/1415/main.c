#include <stdio.h>

int main()
{
    int n, i, max1=0, max2=0;
    for(i=0;i<10;i++)
    {
        scanf("%d ", &n);
        if(n%2 == 1 && max1<n) max1 = n;
        else if(n%2 == 0 && max2<n) max2 = n;
    }
    if(max1 != 0) printf("%d ", max1);
    if(max2 != 0) printf("%d", max2);
    return 0;
}
