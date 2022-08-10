#include<stdio.h>
int a[100];
/*int fun(int a[], int n)
{
	int i, j = 0, b[100], t;
	for (int m = 0; m < 100; m++)
		b[m] = 1;
	for (i = 0; i < n; i++)
	{
		if (a[i] == a[i + 1])
		{
			while (a[i] == a[i + 1])
			{
				b[j]++;
				i++;
			}
			j++;
		}
	}
	t = b[0];
	for (int k = 0; k < j; k++)
	{
		if (t < b[k])
			t = b[k];
	}
	return t;
}*/
int fun(int a[], int n)
{
	int length = 1, counter = 1;
	int p = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] == p)
			counter++;
		else
		{
			p = a[i];
			if (length < counter)
				length = counter;
			counter = 1;
		}
	}
	return length;
}
int main()
{
	int n;
	printf("请输入数组的长度:\n");
	scanf_s("%d", &n);
	printf("请输入数组:\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	int s = fun(a, n);
	printf("最长的平台长度为：\n");
	printf("%d", s);
	return 0;
}