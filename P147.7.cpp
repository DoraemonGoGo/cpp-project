#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c;
	printf("请分别输入一元二次方程的三个系数：\n");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	if (a == 0)
		printf("此方程不是二次方程!\n");
	if (b * b - 4 * a * c < 0)
		printf("一元二次方程无解！\n");
	else
	{
		double derta = b * b - 4 * a * c;
		double x1, x2;
		x1 = (-b + sqrt(derta)) / (2 * a);
		x2 = (-b - sqrt(derta)) / (2 * a);
		printf("此方程的两根为：%lf %lf", x1, x2);
	}
	return 0;
}