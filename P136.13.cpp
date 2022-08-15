#include<stdio.h>
#include<math.h>
float funSinx(float x)
{
	float sum = 0;
	float a = x, b = 1;
	for (int i = 1; fabs(a / b) >= 1e-8; i++)
	{
		sum += a / b;
		a = -a * x * x;
		b = b * (2 * i) * (2 * i + 1);
	}
	return sum;
}
int main()
{
	float x;
	printf("请输入函数x:\n");
	scanf_s("%f", &x);
	printf("sin%f的近似值为：%f", x, funSinx(x));
	return 0;
}