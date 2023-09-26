#include <stdio.h>
#include <string.h>

typedef struct book {	// book라는 구조체 선언
    char name[100];
    int num;
} BOOK;

int main() {
    int n, num, i, j, a, count = 0;
    char name[100], str[100];

    scanf("%d", &n);	// n번 반복할 변수
    getchar();
    BOOK list[n];	// 구조체 선언

    for (i = 0; i < n; i++) {
        fgets(str, sizeof(str), stdin);	// 한 문장을 다 받음
        if(strlen(str) > 2) {	// 문자열의 길이가 2 초과라면 저장
            sscanf(str, "%d %[^\n]", &num, name);
        }
        else {	// 아니라면 숫자만 저장(아스키코드)
            num = str[0] - 48;
        }

        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';	// 문자제거
        }

        if (num == 1) {	// 1이라면 리스트 배열에 값 추가
            int found = 0;	// 변수 생성
            for (j = 0; j < count; j++) {
                if (strcmp(name, list[j].name) == 0) {	// 중복이라면
                    list[j].num++;	// 숫자만 증가
                    found = 1;
                    break;
                }
            }

            if (!found) {	// 중복이 아니라면
                strcpy(list[count].name, name);	//숫자와 이름 둘다 추가
                list[count].num = 1;
                count++;	// 카운트 증가
            }
        } else if (num == 2) {	// 2라면
            int found = 0;
            for (j = 0; j < count; j++) {
                if (strcmp(name, list[j].name) == 0) {	// 겹친다면 숫자 -1
                    list[j].num--;
                    if(list[j].num == 0 && j < count)	// 대출 횟수가 0이라면
                    {
                        for(a=j;a<count-1;a++)	// j부터 있는 배열까지 반복
                        {
                            strcpy(list[a].name, list[a+1].name);
                            list[a].num = list[a+1].num;// 배열 한칸 앞으로 이동
                        }
                        count--;
                    }
                    found = 1;
                    break;
                }
            }

            if (!found) {	// 겹치는 책이 없다면 출력
                printf("no book!\n");
            }
        } else if (num == 0) {	// 0이라면
            for (j = 0; j < count; j++) {
                if(list[j].num != 0)	// num이 0이 아닐 때
                    printf("%s %d\n", list[j].name, list[j].num);	// 책과 숫자 출력
            }
        } else {
            printf("wrong command!\n");	// 명령어가 이상하면 출력
        }
    }

    return 0;
}
