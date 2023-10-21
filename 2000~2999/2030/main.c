#include <stdio.h>
#include <string.h>

int main()
{
    int n, x1, x2, y1, y2, i, j;
    char win[60][30], name[60];
    memset(win, '.', sizeof(win));

    scanf("%d", &n);

    while(n)
    {
        scanf("%s %d %d %d %d", name, &x1, &y1, &x2, &y2);
        for(i=y1;i<y2;i++) {
            for(j=x1;j<x2;j++) {
                if(i==y1 && j==x1 || i==y2-1 && j==x2-1 || i==y2-1 && j==x1 || i==y1 && j==x2-1)
                    win[i-1][j-1] == '+';
                else if(j==x1+1)
                {
                    strncpy(&win[i-1][x1], name, strlen(name));
                    x1 += strlen(name);
                }
                else if(i==y1 || i==y2-1)
                    win[i-1][j-1] == '|';
                else if(j==x2 || j==x2-1)
                    win[i-1][j-1] == '-';
                else
                    win[i-1][j-1] == ' ';
            }
        }
        n--;
    }
    for (i=0;i<60;i++)
    {
        for(j=0;j<30;j++)
            printf("%c", win[i][j]);
        printf("\n");
    }
    return 0;
}
