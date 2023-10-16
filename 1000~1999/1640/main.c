#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, count = 0, vi[100] = {0};
    char str[100][51];
    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++)
    {
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strcspn(str[i], "\n")] = '\0';

        if (strlen(str[i]) <= 3) {
            vi[i] = 1;
            count++;
        } else if (strstr(str[i], "tap")) {
            vi[i] = 1;
            count++;
        } else if (strstr(str[i], "xocure")) {
            vi[i] = 1;
            count++;
        }
    }

    for(i = 0; i < n; i++)
        if (vi[i] == 1)
            printf("%s\n", str[i]);

    if (count < 4)
        printf("safe");
    else if (count < 7)
        printf("warning");
    else
        printf("danger");

    return 0;
}
