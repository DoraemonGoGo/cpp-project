#include<stdio.h>
#include<math.h>
double v(double x, double a, double b, double c, double d)
{
	return a * x * x * x + b * x * x + c * x + d;
}
int main()
{
	double x;
	double a, b, c, d;
	printf("��ֱ�����һԪ���η��̵��ĸ�ϵ����\n");
	scanf_s("%lf%lf%lf%lf", &a, &b, &c, &d);
	double l, r;
	printf("������Ҫ��Ľ�ķ�Χ:\n");
	scanf_s("%lf%lf", &l, &r);
	while (fabs(r - l) > 1e-6)
	{
		x = (l + r) / 2;
		if (v(x, a, b, c, d) > 0)
		{
			r = x;
			x = (l + r) / 2;
		}
		else if (v(x, a, b, c, d) < 0)
		{
			l = x;
			x = (l + r) / 2;
		}
		else if (v(x, a, b, c, d) < 1e-6)
			break;
	}
	printf("��һԪ���η��̵Ľ�Ϊ��%lf", x);
	return 0;
}