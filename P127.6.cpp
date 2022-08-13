#include<stdio.h>
long u, v;
void addrat(int a, int b)
{
	u = u * b + a * v;
	v *= b;
}
void lowterm()
{
	long numcopy, dencopy, remainder;
	numcopy = u;
	dencopy = v;
	while (dencopy != 0)
	{
		remainder = numcopy % dencopy;
		numcopy = dencopy;
		dencopy = remainder;
	}
	if (numcopy > 1)
	{
		u /= numcopy;
		v /= numcopy;
	}
}
int main()
{
	int n, t;
	printf("请输入项数：\n");
	scanf_s("%d", &n);
	if (n <= 0)
		printf("输入错误！\n");
	else
	{
		printf("1/1\n");
		u = 1;
		v = 1;
		for (t = 2; t < n; t++)
		{
			addrat(1, t);
			lowterm();
			printf("%d/%d\n", u, v);
		}
	}
	return 0;
}