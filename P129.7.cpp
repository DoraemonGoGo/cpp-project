#include<stdio.h>
int fun(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return fun(n - 1) * n;
}
int main()
{
	int n;
	double sum = 0.0;
	printf("请输入项数：\n");
	scanf_s("%d", &n);
	if (n < 2)
		printf("输入错误：\n");
	for (int i = 2; i < n; i++)
		sum += i * 1.0 / ((i + 1) * fun(i - 2));
	printf("%llf", sum);
	return 0;
}