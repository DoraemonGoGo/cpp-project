#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	for (int j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int delarr(int a[], int n)
{
	int i, count = 0;
	for (i = 0; i < n; i++)
	{
		if (isPrime(a[i]))
			count++;
		else
			a[i - count] = a[i];
	}
	for (int j = 0; j < n - count; j++)
		printf("%d ", a[j]);
	return n - count;
}
int main()
{
	int n, A[100];
	printf("请输入数组长度:\n");
	scanf_s("%d", &n);
	printf("请输入数组：\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &A[i]);
	int t = delarr(A, n);
	printf("处理后的数组长度为：\n");
	printf("%d\n", t);
	return 0;
}