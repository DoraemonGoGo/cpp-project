#include<stdio.h>
double fun(double a[][2], int n)
{
	if (n == 0)
		return 0;
	return fun(a, n - 1) + a[n - 1][0] * a[n - 1][1];
}
int main()
{
	int n;
	scanf_s("%d", &n);
	double a[100][2];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2; j++)
			scanf_s("%lf", &a[i][j]);
	}
	printf("%lf", fun(a, n));
	return 0;
}