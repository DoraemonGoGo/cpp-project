#include<stdio.h>
int jiecheng(int n)
{
	int num = 1;
	for (int i = 1; i <= n; i++)
		num *= i;
	return num;
}
int main()
{
	int n, i, sum = 0;
	printf("ÇëÊäÈën=");
	scanf_s("%d", &n);
	for (i = 2; i < n; i++)
	{
		while (i != n)
		{
			if (n % i == 0)
			{
				n = n / i;
				printf("%d ", i);
				sum += jiecheng(i);
			}
			else
				break;
		}
	}
	printf("%d ", n);
	printf("%d\n", sum+jiecheng(n));
	return 0;
}