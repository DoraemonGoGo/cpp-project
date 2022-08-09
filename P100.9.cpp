#include<stdio.h>
int mergearr(int a[], int m, int b[], int n)
{
	int i = 0, j = 0, k, len = m;
	for (j = 0; j < n; j++)
	{
		while (i < len && a[i] < b[j])
			i++;
		if (a[i] == b[j])
			continue;
		for (k = len; k > i; k--)
			a[k] = a[k - 1];
		a[i] = b[j];
		len++;
	}
	return len;
}
int main()
{
	int a[20], b[20], m, n;
	printf("请输入数组a的长度:\n");
	scanf_s("%d", &m);
	printf("请输入数组a：\n");
	for (int i = 0; i < m; i++)
		scanf_s("%d", &a[i]);
	printf("请输入数组b的长度:\n");
	scanf_s("%d", &n);
	printf("请输入数组a：\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &b[i]);
	int t = mergearr(a, m, b, n);
	for (int j = 0; j < t; j++)
		printf("%d ", a[j]);
	return 0;
}