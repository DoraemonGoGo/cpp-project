#include<stdio.h>
void fun(int a[], int n)
{
	int i = 0;
	int j = n - 1;
	int temp;
	while (i < j)
	{
		while (a[i] % 2 != 0)
			i++;
		while (a[j] % 2 == 0)
			j--;
		if (i < j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
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
	for (int j = 0; j < n; j++)
		printf("%d ", a[j]);
	return 0;
}