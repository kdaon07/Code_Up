#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("secret.dic", "r"); // 읽기 전용모드로 열기

    if (file == NULL) // 파일 열기 실패
        printf("파일을 열 수 없습니다.");
        return 1;

    char c;

    while ((c = fgetc(file)) != EOF) // 파일 끝까지 반복
        putchar(c); // 문자를 출력

    fclose(file); // 파일을 닫음

    return 0;
}
