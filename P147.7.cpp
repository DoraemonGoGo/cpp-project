#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c;
	printf("��ֱ�����һԪ���η��̵�����ϵ����\n");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	if (a == 0)
		printf("�˷��̲��Ƕ��η���!\n");
	if (b * b - 4 * a * c < 0)
		printf("һԪ���η����޽⣡\n");
	else
	{
		double derta = b * b - 4 * a * c;
		double x1, x2;
		x1 = (-b + sqrt(derta)) / (2 * a);
		x2 = (-b - sqrt(derta)) / (2 * a);
		printf("�˷��̵�����Ϊ��%lf %lf", x1, x2);
	}
	return 0;
}