#include<stdio.h>
int a[30];
int main()
{
	int n;
	printf("���������鳤�ȣ�\n");
	scanf_s("%d", &n);
	printf("���������飺\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	int t;
	for (int j = 0; j < n / 2; j++)
	{
		t = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = t;
	}
	printf("������������Ϊ��\n");
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;
}