#include<stdio.h>
int main()
{
	int a[30][30];
	int i, j, k, sum = 1, n;
	printf("ÇëÊäÈëÂİĞı¾ØÕóµÄ½×Êı£º\n");
	scanf_s("%d", &n);
	for (i = 0; i <= n / 2; i++)
	{
		for (j = i; j <= n - i - 1; j++)
			a[i][j] = sum++;
		for (k = i + 1; k < n - i - 1; k++)
			a[k][n - 1 - i] = sum++;
		for (j = n - i - 1; j > i; j--)
			a[n - i - 1][j] = sum++;
		for (k = n - i - 1; k > i; k--)
			a[k][i] = sum++;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
	return 0;
}