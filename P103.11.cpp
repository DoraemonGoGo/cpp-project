#include<stdio.h>
int a[100];
int del(int a[], int n, int item)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == item)
			k++;
		else
			a[i - k] = a[i];
	}
	return n - k;
}
int main()
{
	int n, item;
	printf("请输入数组长度：\n");
	scanf_s("%d", &n);
	printf("请输入数组：\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	printf("请输入item的值：\n");
	scanf_s("%d", &item);
	int t = del(a, n, item);
	printf("删除后的数组为：\n");
	for (int j = 0; j < t; j++)
		printf("%d ", a[j]);
	return 0;
}