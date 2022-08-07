#include<stdio.h>
int del(int A[], int n, int x, int y)
{
	int i = 0, k = 0;
	while (i < n)
	{
		if (A[i] >= x && A[i] <= y)
			k++;
		else
			A[i - k] = A[i];
		i++;
	}
	return n - k;
}
int main()
{
	int n, A[100];
	int x, y;
	printf("请输入数组长度:\n");
	scanf_s("%d", &n);
	printf("请输入数组：\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &A[i]);
	printf("请输入x,y:\n");
	scanf_s("%d%d", &x, &y);
	int k = del(A, n, x, y);
	printf("删除后的数组为：\n");
	for (int i = 0; i < k; i++)
		printf("%d ", A[i]);
	return 0;
}