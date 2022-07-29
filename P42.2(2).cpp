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
	int n, m, sum = 0;
	printf("ÇëÊäÈën=");
	scanf_s("%d", &n);
	while (n!=0)
	{
		m = n % 10;
		n = n / 10;
		sum += jiecheng(m);
	}
	printf("%d\n", sum);
	return 0;
}