#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);    // 입력
    int arr[50][50] = {0};  // 배열 초기화
    int num = 1;
    int x = 0, y = n / 2;   // 초기 설정
    int nextx, nexty;
    while (num <= n * n)
    {
        arr[x][y] = num++;  // arr값 추가후 num증가

        // 다음 x, y좌표 구함
        nextx = (x - 1 + n) % n;
        nexty = (y + 1) % n;

        // 다음 좌표가 범위 안이라면
        if (arr[nextx][nexty] == 0)
        {
            x = nextx;
            y = nexty;
        }
        else    // 아니라면 범위 안으로
            x = (x + 1) % n;
    }

    // 출력
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}
