#include<stdio.h>
int fun(int n)
{
	if (n == 1)
		return 0;
	int i, temp, min = fun(n - 1) + n - 2;
	for (i = 2; i <= n / 2; i++)
	{
		temp = n - i - i + fun(i) + fun(n - i);
		if (min > temp)
			min = temp;
	}
	return min;
}
int main()
{
	int n;
	printf("������������:\n");
	scanf_s("%d", &n);
	printf("��ִ�����СΪ��%d\n", fun(n));
	return 0;
}