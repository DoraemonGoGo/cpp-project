#include<stdio.h>
#define n 5
int flag[5] = { 0 };
void fun(int a[][n], int i, int k, int path[], int t)
{
	path[t] = i;
	flag[i] = 1;
	if (t == k)
	{
		for (int j = 0; j < k; j++)
			printf("%d ", path[j] + 1);
		printf("\n");
		flag[i] = 0;
		return;
	}
	for (int j = 0; j < n; j++)
	{
		if (a[i][j] != 0 && flag[j] == 0)
			fun(a, j, k, path, t + 1);
	}
	flag[i] = 0;
}
int main()
{
	int path[10];
	int a[n][n], v, k;
	printf("请输入二维数组:\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			scanf_s("%d", &a[i][j]);
	}
	/*printf("请输入节点i和步数k：\n");
	scanf_s("%d%d", &v, &k);*/
	fun(a, 0, 2, path, 0);
	return 0;
}