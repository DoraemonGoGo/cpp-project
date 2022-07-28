#include<stdio.h>
#include<math.h>
int isSquare(int n)
{
	int i = sqrt(n);
	if (n == 1 || n == 0)
		return 1;
	if (i * i == n)
		return 1;
	else return 0;
}
int main()
{
	printf("请输入一个数:");
	int n;
	scanf_s("%d", &n);
	if (isSquare(n))
		printf("Yes!");
	else printf("No!");
}