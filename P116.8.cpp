#include<stdio.h>
int main()
{
	int a[200], b[200];
	int n, i, j;
	printf("����������ĳ���:\n");
	scanf_s("%d", &n);
	printf("����������:\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	/*	for (i = 0; i < 200; i++)
			b[i] = 0;
		for (i = 0; i < n; i++)
			b[a[i]]++;
		for (i = 0; i < 200; i++)
			if (b[i] != 0)
				printf("%d���ֵĴ�����:%d\n", i, b[i]);
	*/
	int time[100] = { 0 }, kind = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < kind; j++)
		{
			if (a[i] == b[j])
			{
				time[j]++;
				break;
			}
		}
		if (j == kind)
		{
			b[kind] = a[i];
			time[kind]++;
			kind++;
		}
	}
	for (i = 0; i < kind; i++)
		printf("%d���ֵĴ�����:%d\n", b[i], time[i]);
	return 0;
}