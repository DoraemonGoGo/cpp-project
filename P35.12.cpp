#include<stdio.h>
int main()
{
	int a1, b1, a2, b2, i, e, f, p, q;
	printf("�����븴��:");
	scanf_s("%d%d%d%d", &a1, &b1, &a2, &b2);
	p = a1 + a2;
	q = b1 + b2;
	e = a1 * a2 - b1 * b2;
	f = a1 * b2 + a2 * b1;
	if (p == 0)
	{
		if (q >= 0)
			printf("��ӵ�%di\n", q);
		else
			printf("��ӵ�%di\n", q);
	}
	else
	{
		if (q >= 0)
			printf("��ӵ�%d+%di\n", p, q);
		else
			printf("��ӵ�%d%di\n", p, q);
	}
	if (e == 0)
	{
		if (f >= 0)
				printf("��˵�%di\n", f);
			else
				printf("��˵�%di\n", f);
	}
	else
	{
		if (q >= 0)
			printf("��ӵ�%d+%di\n", p, q);
		else
			printf("��ӵ�%d%di\n", p, q);
	}
	return 0;
}