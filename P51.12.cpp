#include<stdio.h>
int main()
{
	int a, b, sum = 0;
	printf("请输入两个数：");
	scanf_s("%d%d", &a, &b);
	int buf1[10] = { 0 }, buf2[10] = { 0 }, len1 = 0, len2 = 0;
	while (a!=0)
	{
		buf1[len1++] = a % 10;
		a /= 10;
	}
	while (b != 0)
	{
		buf2[len2++] = b % 10;
		b /= 10;
	}
	for (int i = 0; i < len1; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			sum += buf1[i] * buf2[j];
		}
	}
	printf("%d\n", sum);
	return 0;
}