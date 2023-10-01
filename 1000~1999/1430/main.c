#include<stdio.h>

int main()
{
    int n, m, b, i;
    int a[10000001] = {};   // 변수 초기화
    scanf("%d", &n);    //
    for (i=0;i<n; i++)
    {
        scanf("%d", &b);
        a[b] = 1;   // 입력받은 배열값 1로 변경
    }
    scanf("%d", &m);
    for (i=0;i<m; i++)
    {
        scanf("%d", &b);
        printf("%d ", a[b]);    // 기억한 숫자라면 1 출력
    }

    return 0;

}
