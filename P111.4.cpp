#include<stdio.h>
int main()
{
	int a[5][5];
	printf("������һ��5x5�Ķ�ά����:\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	int i, j, k = 0;
	int b[200];
	for (i = 0; i < 200; i++)
		b[i] = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			b[a[i][j]]++;
			k++;
		}
	}
	int max = b[0];
	for (i = 0; i < k; i++)
	{
		if (max < b[i])
			max = b[i];
	}
	printf("����Ƶ����ߵ���Ϊ��\n");
	for (j = 0; j < k; j++)
	{
		if (b[j] == max)
			printf("%d ", j);
	}
	return 0;
}