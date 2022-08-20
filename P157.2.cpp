#include<stdio.h>
int a[100];
int sum(int a[], int n)
{
	if (n == 1)
		return a[0];
	else
		return sum(a, n - 1) + a[n - 1];
}
int main()
{
	int n;
	printf("请输入数组中元素的个数:\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	printf("数组的和为：\n%d", sum(a, n));
	return 0;
}