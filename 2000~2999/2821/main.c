#include <stdio.h>

int main()
{
    int n, i, max=0, count=0;
    char stick[1000], color;
    scanf("%d", &n);
    scanf("%s", stick);
    color = stick[0];
    for(i=0;i<n;i++)
    {
        if(color == stick[i]){
            count++;
            if(max<count) max = count;
        }
        else {
            count = 1;
            color = stick[i];
        }
    }
    printf("%d", max);
    return 0;
}
