#include<stdio.h>
int count = 1;
int fun(double n)
{
	if (n > 5)
	{
		count++;
		fun(2 * n / 5);
		fun(3 * n / 5);
	}
	else
		return count;
}
int main()
{
	double n;
	printf("������ľ������:\n");
	scanf_s("%lf", &n);
	printf("�ᱻ�۶�Ϊ%d��ľ��", fun(n));
}