#include<stdio.h>
#include<math.h>
#define N 10
int main()
{
	int n, m;
	printf("请输入N:\n");
	scanf_s("%d", &n);
	printf("请输入m:\n");
	scanf_s("%d", &m);
	int a[N] = { 0 };
	for (int i = 0; i < n; i++)
		a[i] = 0;
	for (int i = 0; i < pow(2, n); i++)
	{
		int count = 0;
		for (int i = 0; i < n - 1; i++)//整理二进制数组，够2的进位 
		{
			a[i + 1] += a[i] / 2;
			a[i] = a[i] % 2;
		}
		for (int j = 0; j < n; j++)
		{
			if (a[j] == 1)
				count++;
		}
		if (count == m)
		{
			int flag = 0;
			printf("{");
			for (int i = 0; i < n; i++)
			{
				if (a[i] == 1)
				{
					if (flag == 1)
					printf(",");
					printf("%d", i+1);
					flag = 1;
				}	
			}
			printf("}\n");
		}
		a[0]++;
	}
	return 0;
}