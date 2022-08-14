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
	int i = 1, x;
	printf("请输入x：\n");
	scanf_s("%ld", &x);
	double sum = 0.0, t = x;
	int sign = 1;
	while (t > 1e-3)
	{
		t = pow(x, i) / fun(i);
		sum = sum + sign * t;
		sign = -sign;
		i++;
	}
	printf("近似值为：%llf\n", sum);
	return 0;
}