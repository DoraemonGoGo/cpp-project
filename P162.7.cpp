#include<stdio.h>
void fun(int n)
{
	char next;
	if (n == 1)
	{
		next = getchar();
		printf("�෴˳�����������");
		putchar(next);
	}
	else
	{
		next = getchar();
		fun(n - 1);
		putchar(next);
	}
}
int main()
{
	int n;
	printf("������n��\n");
	scanf_s("%d", &n);
	printf("������n���ַ���\n");
	fun(n + 1);
	printf("\n");
	return 0;
}