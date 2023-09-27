#include <stdio.h>

typedef struct student
{
    char name[10];
    int score;
    int num;
} STUDENT;

int main()
{
    int i, j, n, m;
    STUDENT stude[100];

    scanf("%d %d", &n, &m);

    for (i =0;i<n;i++)
    {
        scanf("%s %d", stude[i].name, &stude[i].score);
        stude[i].num = i;
    }
    for (i=0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (stude[i].score < stude[j].score ||
                (stude[i].score == stude[j].score && stude[i].num > stude[j].num))
            {
                STUDENT temp = stude[i];
                stude[i] = stude[j];
                stude[j] = temp;
            }
        }
    }

    for (i=0;i<m;i++)
    {
        printf("%s\n", stude[i].name);
    }

    return 0;
}
