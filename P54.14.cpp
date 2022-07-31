#include<stdio.h>
int main()
{
	int n, count = 0;
	printf("请输入一个自然数:");
	scanf_s("%d", &n);
	while (n!=1)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
		count++;
	}
	printf("STEP=%d\n", count);
	return 0;
}