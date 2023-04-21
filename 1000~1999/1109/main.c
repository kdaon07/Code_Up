#include <stdio.h>

int main()
{
    char name[21];
    int age;
    char n[21];
    double key;

    scanf("%s", name);
    scanf("%d", &age);
    scanf("%s", &n);
    scanf("%lg", &key);

    printf("%s\n%d\n%s\n%lg",name,age, n, key);

    return 0;
}
