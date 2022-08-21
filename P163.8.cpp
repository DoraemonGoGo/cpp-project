#include<stdio.h>
int count = 1;
int fun(double n)
{
	if (n > 5)
	{
		count++;
		fun(2 * n / 5);
		fun(3 * n / 5);
	}
	else
		return count;
}
int main()
{
	double n;
	printf("请输入木条长度:\n");
	scanf_s("%lf", &n);
	printf("会被折断为%d根木条", fun(n));
}