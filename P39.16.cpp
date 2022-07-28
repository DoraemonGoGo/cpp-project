#include<stdio.h>
int jiecheng(int n)
{
	int num = 1;
	for (int i = 1; i <= n; i++)
		num *= i;
	return num;
}
int main()
{
	int sum = 0, s;
	printf("ÇëÊäÈëÊý×Ö:");
	scanf_s("%d", &s);
	for (int j = 1; j <= s; j++)
		sum += jiecheng(j);
	printf("%d", sum);
	return 0;
}