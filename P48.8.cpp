#include<stdio.h>
#include<math.h>
int a[15];
int main()
{
	int n, m, count = 0, sum = 0;
	printf("请输入一个数：");
	scanf_s("%d", &n);
	while (n!=0)
	{
		m = n % 10;
		n = n / 10;
		a[count++] = m;
	}
	for (int i = 0; i < count; i++)
	{
		printf("%d ",a[i]);
	}
	for (int i = 0; i < count; i++)
	{
		sum += a[i] * pow(10, (count-1-i));
	}
	printf("%d\n", sum);
	return 0;
}