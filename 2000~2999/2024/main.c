#include <stdio.h>
#include <string.h>

int main() {
    char str2[] = "영일이삼사오육칠팔구";
    char n[11];

    scanf("%s", n);

    int len = strlen(n);

    for (int i = 0; i < len; i++) {
        int digit = n[i] - '0'; // 입력된 문자를 숫자로 변환

        // 숫자가 0이 아닌 경우 한글로 출력
        if (digit != 0) {
            printf("%c", str2[digit]); // str2 배열에서 한글 숫자를 가져와 출력
        }

        // 숫자가 0인 경우 해당 자릿수의 단위 출력
        if (digit != 0 || (i == len - 1)) {
            switch ((len - i - 1) % 4) {
                case 0: printf("천"); break;
                case 1: printf("백"); break;
                case 2: printf("십"); break;
            }
        }
    }

    return 0;
}
