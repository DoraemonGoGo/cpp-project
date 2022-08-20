#include<stdio.h>
void fun(int n)
{
	char next;
	if (n == 1)
	{
		next = getchar();
		printf("相反顺序的输出结果：");
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
	printf("请输入n：\n");
	scanf_s("%d", &n);
	printf("请输入n个字符：\n");
	fun(n + 1);
	printf("\n");
	return 0;
}