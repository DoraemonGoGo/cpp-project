#include<stdio.h>
int main()
{
	int n, sum = 0;
	printf("������n=");
	scanf_s("%d", &n);
	while (n != 0)
	{
		sum++;
		n = n / 10;
	}
	printf("%d\n", sum);
	return 0;
}