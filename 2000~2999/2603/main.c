#include <stdio.h>

int main() {
    int i, j;
    int score[10];

    for (i = 0; i < 10; i++)
        scanf("%d", &score[i]);

    for (i=100;i>=10;i-= 10)
    {
        for (j=0;j<10;j++)
        {
            if (score[j] >= i)
                printf("# ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
