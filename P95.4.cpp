#include<stdio.h>
int fun(int a[], int n)
{
	int i = 0, j, k = 0, count = 0;
	while (i < n)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
				k++;
			else
				a[j - k] = a[j];
		}
		i++;
		n -= k;
		k = 0;
	}
	return n;
}
int main()
{
	int n, A[100];
	printf("���������鳤��:\n");
	scanf_s("%d", &n);
	printf("���������飺\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &A[i]);
	int k = fun(A, n);
	printf("%d\n", k);
	printf("ɾ���������Ϊ��\n");
	for (int i = 0; i < k; i++)
		printf("%d ", A[i]);
	return 0;
}