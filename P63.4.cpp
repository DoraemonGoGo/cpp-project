#include<stdio.h>
int a[30];
void transForm(int n)
{
	int m, count = 0, sum = 0;
	while (n!=0)
	{
		m = n % 2;
		n /= 2;
		a[count++] = m;
	}
	for (int i = count - 1; i >= 0; i--)
		printf("%d", a[i]);
}
int main()
{
	int n;
	printf("请输入一个十进制数：");
	scanf_s("%d", &n);
	transForm(n);
	return 0;
}