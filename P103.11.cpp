#include<stdio.h>
int a[100];
int del(int a[], int n, int item)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == item)
			k++;
		else
			a[i - k] = a[i];
	}
	return n - k;
}
int main()
{
	int n, item;
	printf("���������鳤�ȣ�\n");
	scanf_s("%d", &n);
	printf("���������飺\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	printf("������item��ֵ��\n");
	scanf_s("%d", &item);
	int t = del(a, n, item);
	printf("ɾ���������Ϊ��\n");
	for (int j = 0; j < t; j++)
		printf("%d ", a[j]);
	return 0;
}