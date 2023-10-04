#include <stdio.h>

int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    int s[n];

    for (i = 0; i < n; i++)
        scanf("%d", &s[i]);

    for (i = 1; i < n - 1; i++)
    {
        if (s[i] == 0)
        {
            if (s[i - 1] == 0 && s[i + 1] == 0)
                count++;
        }
    }

    if (s[0] == 0 && s[1] == 0)
        count++;
    if (s[n - 1] == 0 && s[n - 2] == 0 && n>1)
        count++;

    printf("%d", count);
    return 0;
}
