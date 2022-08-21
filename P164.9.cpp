#include<stdio.h>
int fun(int n)
{
	int sum = 0;
	if (n == 2)
		return 1;
	if (n > 2)
	{
		for (int i = 2; i < n; i++)
			sum += fun(i) * fun(n + 1 - i);
	}
	return sum;
}
int main()
{
	int n;
	printf("请输入边数n：\n");
	scanf_s("%d", &n);
	printf("三角形剖分数为：%d\n", fun(n));
	return 0;
}