#include<stdio.h>
struct Fenshu
{
	int num;
	int den;
	float result;
};
struct Fenshu list[10000] = { 0 };
int listLenth = 0;
int gcd(int m, int n)
{
	if (n == 0)
		return m;
	else
		return gcd(n, m % n);
}
void addList(Fenshu res)
{
	int i, j;
	for (i = 0; i < listLenth; i++)
	{
		if (list[i].result > res.result)
			break;
	}
	if (i < listLenth)
	{
		for (j = listLenth; j > i; j--)
			list[j] = list[j - 1];
		list[i] = res;
		listLenth++;
	}
	else
		list[listLenth++] = res;
}
int main()
{
	int n;
	int i, j;
	printf("请输入一个正整数:\n");
	scanf_s("%d", &n);
	for (i = 1; i < n; i++)
	{
		for (j = i + 1; j <= n; j++)
		{
			if (gcd(i, j) == 1)
			{
				Fenshu res;
				res.num = i;
				res.den = j;
				res.result = 1.0 * i / j;
				addList(res);
			}
		}
	}
	for (i = 0; i < listLenth; i++)
	{
		printf("%d/%d\t", list[i].num, list[i].den);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
	return 0;
}