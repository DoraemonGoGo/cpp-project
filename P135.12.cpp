#include<stdio.h>
int fun(int x, int n)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return 2 * x;
	else
		return 2 * x * fun(x, n - 1) - 2 * (n - 1) * fun(x, n - 2);
}
int main()
{
	int n, x;
	printf("��������������\n");
	scanf_s("%d", &n);
	printf("�����뺯��ֵ��\n");
	scanf_s("%d", &x);
	printf("����ʽ��ֵΪ��%d", fun(x, n));
	return 0;
}