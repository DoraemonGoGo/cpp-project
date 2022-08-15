#include<stdio.h>
double fun2(double x, int n)
{
	double num = 1.0;
	for (int i = 1; i <= n; i++)
		num *= x;
	return num;
}
int main()
{
	printf("%llf", fun2(1.5, 5));
	return 0;
}