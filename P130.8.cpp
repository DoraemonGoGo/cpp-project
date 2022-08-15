#include<stdio.h>
#include<math.h>
int fun(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return fun(n - 1) * n;
}
int main()
{
	double x;
	int i = 1;
	printf("请输入x：\n");
	scanf_s("%lf", &x);
	double sum = 0.0, t = x;
	int sign = 1;
	while (t > 0.00005)
	{
		t = pow(x, i) / fun(i);
		sum = sum + sign * t;
		sign = -sign;
		i += 2;
	}
	printf("sin%lf的近似值为：%lf\n", x, sum);
	return 0;
}