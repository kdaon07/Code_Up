#include <stdio.h>
#include <string.h>

int main()
{
    int i, size, a;
    char num[10];
    char num2[5] = "억만천백십"; // 컴파일 버그나서 다음에 함
    char num1[9] = "일이삼사오육칠팔구";

    scanf("%s", num);
    size = strlen(num);
    printf("%s", num2);
    for (i = 0; i < size; i++)
    {
        a = num[i] - '0';
        printf("%d\n", a);
        printf("%c", num1[a - 1]);
    }

    printf("\n");

    return 0;
}
