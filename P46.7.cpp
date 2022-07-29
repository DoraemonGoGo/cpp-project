#include<stdio.h>
int main()
{
	int m, n, flag = 0;
	printf("请输入一个数：");
	scanf_s("%d", &n);
	while (n!=0)
	{
		m = n % 10;
		n /= 10;
		if (!(m == 1 || m == 3 || m == 5 || m == 7 || m == 9))
		{
			flag = 1;
			break;
		}
	}
	if (flag)
		printf("N0!");
	else
		printf("YES!");
	return 0;
}