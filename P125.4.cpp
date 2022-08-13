#include<stdio.h>
/*void fun(int n, int* a, int cur)
{
	if (cur == n)
		for (int i = 0; i < n; i++)
		{
			printf("%d ", a[i]);
			if ((i + 1) % 10 == 0)
				printf("\n");
		}
	else if (a[cur - 1] * a[cur - 1] < 10)
	{
		a[cur] = a[cur - 1] * a[cur - 2];
		fun(n, a, cur + 1);
	}
	else
	{
		a[cur] = a[cur - 2] * a[cur - 1] / 10;
		a[cur + 1] = a[cur - 2] * a[cur - 1] % 10;
	}
	fun(n, a, cur);
}*/
int main()
{
	int* a = new int[200];
	int n;
	printf("ÇëÊäÈëÏîÊý£º\n");
	scanf_s("%d", &n);
	int j = 2;

	a[0] = 2, a[1] = 3;
	int i = 2;
	while (i < n)
	{
		if (a[i - 2] * a[i - 1] / 10 == 0)
		{
			a[i] = a[i - 1] * a[i - 2];
			i++;
		}
		else
		{
			a[i] = a[i - 2] * a[i - 1] / 10;
			a[i + 1] = a[i - 2] * a[i - 1] % 10;
			i += 2;
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
	return 0;
}