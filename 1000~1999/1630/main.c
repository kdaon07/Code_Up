#include <stdio.h>

int main()
{
    int n, i;
    char name[100];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%s", name);
        printf("%s\n", name);
        if(i!=n-1)
            printf("AMOLED\n");
    }
    return 0;
}
