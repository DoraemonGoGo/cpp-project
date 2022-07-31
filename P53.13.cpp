#include<stdio.h>
int main()
{
	int n, a, b, c, d;
	printf("请输入一个数:");
	scanf_s("%d", &n);
	a = ((n % 10) + 5) % 10;
	d = ((n / 1000) + 5) % 10;
	c = (((n / 100) % 10) + 5) % 10;
	b = (((n / 10) % 10) + 5) % 10;
	printf("%d\n", a * 1000 + b * 100 + c * 10 + d);
	return 0;
}