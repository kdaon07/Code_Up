#include <stdio.h>

int main() {
    int n, i;
    char num[201];
    scanf("%d", &n);
    scanf("%s", num);

    int comma = n % 3;
    if(comma == 0) comma = 3;
    if (n <= 3)
    {
        printf("%s\n", num);
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        if (comma == 0 && i != 0)
        {
            printf(",");
            comma = 3;
        }
        printf("%c", num[i]);
        comma--;
    }
    return 0;
}
