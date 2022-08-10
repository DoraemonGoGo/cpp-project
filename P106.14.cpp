#include<stdio.h>
#define N 10
void sort(int a[][10])
{
	int i, j, t, * p;
	p = &a[0][0];
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 99 - i; j++)
		{
			if (*(p + j) > *(p + j + 1))
			{
				t = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
		}
	}
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
	sort(A);
	printf("排序后的数组为：\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
	return 0;
}