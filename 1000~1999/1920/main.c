# include <stdio.h>

int f(int x)
{
	if(x < 1)
		return;
	f(x/2);
	printf("%d",x%2);

}

int main()
{
	int n;

	scanf("%d",&n);
	if(n > 0)
		f(n);
	else printf("0");
	return 0;
}
