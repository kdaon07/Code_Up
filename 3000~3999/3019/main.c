#include <stdio.h>
#include <string.h>

typedef struct schedule
{
    char name[100];
    int y, m, d;
    int rank;
} sched;

int main()
{
    int n, i, j;
    sched s[100];
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%s %d %d %d", s[i].name, &s[i].y, &s[i].m, &s[i].d);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i].y > s[j].y ||
                (s[i].y == s[j].y && s[i].m > s[j].m) ||
                (s[i].y == s[j].y && s[i].m == s[j].m && s[i].d > s[j].d) ||
                (s[i].y == s[j].y && s[i].m == s[j].m && s[i].d == s[j].d && strcmp(s[i].name, s[j].name) > 0))
            {
                sched temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%s\n", s[i].name);
    }

    return 0;
}
