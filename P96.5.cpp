#include<stdio.h>
#define N 10
int vector(int a[N][N], int n)
{
	int i, j, b[N], c[N], sum = 0;
	for (i = 0; i < n; i++)
	{
		int max = a[i][0];
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > max)
				max = a[i][j];
		}
		b[i] = max;
	}
	for (j = 0; j < n; j++)
	{
		int min = a[0][j];
		for (i = 0; i < n; i++)
		{
			if (a[i][j] < min)
				min = a[i][j];
		}
		c[j] = min;
	}
	for (int k = 0; k < n; k++)
		sum += b[k] * c[k];
	return sum;
}
int main()
{
	int n = 10;
	int A[N][N];
	printf("请输入一个10x10的二维数组:\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf_s("%d", &A[i][j]);
		}
	}
	printf("二维数组为：\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
	printf("向量乘积为：\n");
	printf("%d\n", vector(A, n));
	return 0;
}
