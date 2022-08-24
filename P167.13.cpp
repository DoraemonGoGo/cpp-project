#include<stdio.h>
int fun(int n, int j)
{
	if (j == 1)
		return n % 10;
	else
		return fun(n / 10, j - 1);
}
int main()
{
	int n, j;
	scanf_s("%d%d", &n, &j);
	printf("%d", fun(n, j));
	return 0;
}
