#include<stdio.h>
int fun1(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * fun1(n - 1);
}
double fun2(int n)
{
	if (n == 0)
		return 0;
	else
		return n * 1.0 / ((n + 1) * fun1(n + 2)) + fun2(n - 1);
}
int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%lf", fun2(n));
	return 0;
}