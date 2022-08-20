#include<stdio.h>
double Hermite(double x, int n)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return 2 * x;
	else
		return 2 * x * Hermite(x, n - 1) - 2 * (n - 1) * Hermite(x, n - 2);
}
int main()
{
	int n;
	double x;
	printf("请输入n和x:\n");
	scanf_s("%d%lf", &n, &x);
	printf("结果为:\n%lf", Hermite(x, n));
	return 0;
}