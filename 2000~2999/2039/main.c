#include <stdio.h>

int main()
{
    int shour, smin, min, free, n, lunch, lmin;
    int count=1, i;
    scanf("%d %d %d %d %d %d %d",
        &shour, &smin, &min, &free, &n, &lunch, &lmin);

    if(lunch > n) lunch = n+1;
    else lunch++;

    for(i=0;i<n+1;i++)
    {
        while (smin >= 60) {
            smin -= 60;
            shour++;
        }
        printf("%d:%02d-", shour, smin);

        if(i+1 != lunch) {
            smin += min;
            while (smin >= 60) {
                smin -= 60;
                shour++;
            }
            printf("%d:%02d ", shour, smin);
            printf("%d교시\n", count++);
            if(i+2 != lunch)
                smin += free;
        }
        else {
            smin += lmin;
            while (smin >= 60) {
                smin -= 60;
                shour++;
            }
            printf("%d:%02d ", shour, smin);
            printf("점심시간\n");
        }
    }
    return 0;
}
