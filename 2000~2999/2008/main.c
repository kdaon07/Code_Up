#include <stdio.h>

int main()
{
    int n, num[100], i;
    int same = 0, a = 0, b = 0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d ", &num[i]);
        if(i != 0)
        {
            if(num[i] == num[i-1]) same++;
            else if(num[i] > num[i-1]) a++;
            else if(num[i] < num[i-1]) b++;
        }
    }

    if(a && b || same == n-1)
        printf("����");
    else if(a)
        printf("��������");
    else if(b)
        printf("��������");

    return 0;
}
