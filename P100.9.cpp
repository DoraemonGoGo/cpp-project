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
	printf("����������a�ĳ���:\n");
	scanf_s("%d", &m);
	printf("����������a��\n");
	for (int i = 0; i < m; i++)
		scanf_s("%d", &a[i]);
	printf("����������b�ĳ���:\n");
	scanf_s("%d", &n);
	printf("����������a��\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &b[i]);
	int t = mergearr(a, m, b, n);
	for (int j = 0; j < t; j++)
		printf("%d ", a[j]);
	return 0;
}