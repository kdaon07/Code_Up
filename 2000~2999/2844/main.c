#include <stdio.h>
#include <string.h>

typedef struct book {	// book��� ����ü ����
    char name[100];
    int num;
} BOOK;

int main() {
    int n, num, i, j, a, count = 0;
    char name[100], str[100];

    scanf("%d", &n);	// n�� �ݺ��� ����
    getchar();
    BOOK list[n];	// ����ü ����

    for (i = 0; i < n; i++) {
        fgets(str, sizeof(str), stdin);	// �� ������ �� ����
        if(strlen(str) > 2) {	// ���ڿ��� ���̰� 2 �ʰ���� ����
            sscanf(str, "%d %[^\n]", &num, name);
        }
        else {	// �ƴ϶�� ���ڸ� ����(�ƽ�Ű�ڵ�)
            num = str[0] - 48;
        }

        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';	// ��������
        }

        if (num == 1) {	// 1�̶�� ����Ʈ �迭�� �� �߰�
            int found = 0;	// ���� ����
            for (j = 0; j < count; j++) {
                if (strcmp(name, list[j].name) == 0) {	// �ߺ��̶��
                    list[j].num++;	// ���ڸ� ����
                    found = 1;
                    break;
                }
            }

            if (!found) {	// �ߺ��� �ƴ϶��
                strcpy(list[count].name, name);	//���ڿ� �̸� �Ѵ� �߰�
                list[count].num = 1;
                count++;	// ī��Ʈ ����
            }
        } else if (num == 2) {	// 2���
            int found = 0;
            for (j = 0; j < count; j++) {
                if (strcmp(name, list[j].name) == 0) {	// ��ģ�ٸ� ���� -1
                    list[j].num--;
                    if(list[j].num == 0 && j < count)	// ���� Ƚ���� 0�̶��
                    {
                        for(a=j;a<count-1;a++)	// j���� �ִ� �迭���� �ݺ�
                        {
                            strcpy(list[a].name, list[a+1].name);
                            list[a].num = list[a+1].num;// �迭 ��ĭ ������ �̵�
                        }
                        count--;
                    }
                    found = 1;
                    break;
                }
            }

            if (!found) {	// ��ġ�� å�� ���ٸ� ���
                printf("no book!\n");
            }
        } else if (num == 0) {	// 0�̶��
            for (j = 0; j < count; j++) {
                if(list[j].num != 0)	// num�� 0�� �ƴ� ��
                    printf("%s %d\n", list[j].name, list[j].num);	// å�� ���� ���
            }
        } else {
            printf("wrong command!\n");	// ��ɾ �̻��ϸ� ���
        }
    }

    return 0;
}
