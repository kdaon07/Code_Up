#include <stdio.h>

int main()
{
    int n, s[55], r[55];
    char name[55][22];

    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%s %d", name[i], &s[i]);
        r[i] = 1;
    }

    for(int i=0; i<n; i++)
        for(int j=0;j<n;j++)
            if(s[i] < s[j])
                r[i]++;

    for(int i=0;i<n;i++)
        if(r[i]==3)
            printf("%s", name[i]);
    return 0;
}
