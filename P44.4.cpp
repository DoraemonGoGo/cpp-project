#include<stdio.h>
#include<math.h>
int main()
{
	int a, n, sum1 = 0, sum2 = 0;
	printf("请输入a和位数:");
	scanf_s("%d%d", &a, &n);
	for (int i = 1; i <= n; i++)
	{
		int j = 0;
		while (j<i)
		{
			sum2 += a*pow(10, j);
			j++;
		}
		sum1 += sum2;
	}
	printf("%d\n", sum2);
	return 0;
}