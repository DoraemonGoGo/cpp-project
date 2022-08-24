#include<stdio.h>
int fun(int n)
{
	if (n == 1)
		return 0;
	int i, temp, min = fun(n - 1) + n - 2;
	for (i = 2; i <= n / 2; i++)
	{
		temp = n - i - i + fun(i) + fun(n - i);
		if (min > temp)
			min = temp;
	}
	return min;
}
int main()
{
	int n;
	printf("请输入正整数:\n");
	scanf_s("%d", &n);
	printf("拆分次数最小为：%d\n", fun(n));
	return 0;
}