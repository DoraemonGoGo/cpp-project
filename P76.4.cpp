#include<stdio.h>
int combine(int a[], int b[], int c[], int m, int n)
{
	int i = 0, j = 0, k = 0;
	while ((i < m) && (j < n))
	{
		if (a[i] < b[j])
		{
			c[k] = a[i];
			i++;
		}
		else
		{
			c[k] = b[j];
			j++;
		}
		k++;
	}
	if (i == m)
	{
		while (j < n)
		{
			c[k] = b[j];
			k++;
			j++;
		}
	}
	if (j == n)
	{
		while (i < m)
		{
			c[k] = a[i];
			k++;
			i++;
		}
	}
	return k;
}
int main()
{
	int m, n;
	int a[100], b[100], c[100];
	printf("请分别输入两个数组的长度：\n");
	scanf_s("%d%d", &m, &n);
	printf("请输入第一个数组：\n");
	for (int i = 0; i < m; i++)
		scanf_s("%d", &a[i]);
	printf("请输入第二个数组：\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &b[i]);
	int k = combine(a, b, c, m, n);
	printf("%d\n", k);
	for (int i = 0; i < k; i++)
		printf("%d ", c[i]);
	return 0;
}