#include<stdio.h>
int fun(int a[], int n)
{
	int i = 0;
	int j = n - 1;
	int m = 0;
	int temp;
	while (i < j)
	{
		while (a[i] % 2 == 0)
		{
			i++;
			m++;
		}
		while (a[j] % 2 != 0)
		{
			j--;
		}
		if (i < j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	return m;
}
void sort(int a[], int m, int n)
{
	int t;
	for (int i = m; i < n - 1; i++)
	{
		for (int j = m; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}
		}
	}
}
int main()
{
	int n, a[100];
	printf("请输入数组长度：\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	int s = fun(a, n);
	sort(a, 0, s - 1);
	sort(a, s, n);
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;
}