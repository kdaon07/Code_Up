#include <stdio.h>

typedef struct machine {
    int num;
    int gas;
}Machine;

int main()
{
    int n, i, j;
    Machine m[100];
    Machine temp;
    scanf("%d", &n);

    for (i=0;i<n;i++)
        scanf("%d %d", &m[i].num, &m[i].gas);

    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (m[j].num > m[j + 1].num)
            {
                temp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d %d\n", m[i].num, m[i].gas);

    return 0;
}
