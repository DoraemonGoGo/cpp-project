#include<stdio.h>
int a[5][5];
int main()
{
	int n = 5;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf_s("%d", &a[i][j]);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			printf("%d", a[i][j]);
	return 0;
}