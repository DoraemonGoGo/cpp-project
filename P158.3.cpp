#include<stdio.h>
int fun(int n)
{
	if (n < 10)
		return n;
	else
		return n % 10 + fun(n / 10);
}
int main()
{
	int n;
	printf("������һ������\n");
	scanf_s("%d", &n);
	printf("��λ���ĺ�Ϊ��\n%d", fun(n));
	return 0;
}