#include<stdio.h>
int a[100];
int main()
{
	int n, k;
	printf("请输入数组长度:\n");
	scanf_s("%d", &n);
	printf("请输入数组:\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	printf("请输入k值:\n");
	scanf_s("%d", &k);
	int t, count = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
		count++;
		if (count == k)
			break;
	}
	printf("第%d大的整数为:\n", k);
	printf("%d", a[n - k]);
	return 0;
}