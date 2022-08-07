#include<stdio.h>
int a[100];
int change(int a[], int n)
{
	int i, j, t;
	for (i = 0; i < n; i++)
	{
		if (a[i] == 0)
		{
			for (j = i; j < n; j++)
			{
				if (a[j] != 0)
				{
					t = a[i];
					a[i] = a[j];
					a[j] = t;
					break;
				}
				if (j == n - 1)
					return 0;
			}
		}
	}
}
int main()
{
	int n;
	printf("请输入数组长度:\n");
	scanf_s("%d", &n);
	printf("请输入数组：\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	change(a, n);
	printf("移动后的数组为：\n");
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;
}