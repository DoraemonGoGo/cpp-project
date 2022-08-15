#include<stdio.h>
double fun(int n)
{
	double sum = 0;
	int sign = 1;
	for (int i = 1; i <= n; i++)
	{
		sum += 1.0 * sign * (1.0 / i);
		sign = -sign;
	}
	return sum;
}
int main()
{
	int n;
	printf("ÇëÊäÈëÐòÁÐÊý£º\n");
	scanf_s("%d", &n);
	printf("%llf", fun(n));
	return 0;
}