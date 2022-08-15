#include<stdio.h>
int fun(int x, int n)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return 2 * x;
	else
		return 2 * x * fun(x, n - 1) - 2 * (n - 1) * fun(x, n - 2);
}
int main()
{
	int n, x;
	printf("请输入序列数：\n");
	scanf_s("%d", &n);
	printf("请输入函数值：\n");
	scanf_s("%d", &x);
	printf("多项式的值为：%d", fun(x, n));
	return 0;
}