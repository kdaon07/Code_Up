#include<stdio.h>

int main()
{
	int a= 0;
	int b= 0;
	int t;
	for (int i = 0; i < 7; i++)
    {
		scanf("%d", &t);
		if (t % 2 == 0)
		{
			if (b < t) b = t;
		}
		else if (a < t) a = t;
	}
    printf("%d", a+b);
	return 0;
}

