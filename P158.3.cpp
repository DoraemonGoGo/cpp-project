#include<stdio.h>
int fun(int n)
{
	if (n < 10)
		return n;
	else
		return n % 10 + fun(n / 10);
}
int main()
{
	int n;
	printf("请输入一个数：\n");
	scanf_s("%d", &n);
	printf("各位数的和为：\n%d", fun(n));
	return 0;
}