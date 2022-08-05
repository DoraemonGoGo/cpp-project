#include<stdio.h>
int a[30];
int main()
{
	int n;
	printf("请输入数组长度：\n");
	scanf_s("%d", &n);
	printf("请输入数组：\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	int t;
	for (int j = 0; j < n / 2; j++)
	{
		t = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = t;
	}
	printf("排完序后的数组为：\n");
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;
}