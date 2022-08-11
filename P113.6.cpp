#include<stdio.h>
void fun(int a[], int n)
{
	for (int i = 0; i < 2 * n; i += 2)
		for (int j = n + i; j > i; j--)
			a[j] = a[j - 1];
}
int main()
{
	int n;
	printf("请输入数组的长度:\n");
	scanf_s("%d", &n);
	int a[100];
	printf("请输入数组:\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	fun(a, n);
	for (int i = 0; i < 2 * n; i++)
		printf("%d ", a[i]);
	return 0;
}