#include<stdio.h>
void reverse(int a[], int n)
{
	int i, t;
	for (i = 0; i < (n / 2); i++)
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
	return;
}
int main()
{
	int m, n, a[100];
	printf("������ǰһ�γ��ȣ�\n");
	scanf_s("%d", &m);
	printf("������ǰһ�����飺\n");
	for (int i = 0; i < m; i++)
		scanf_s("%d", &a[i]);
	printf("�������һ�γ��ȣ�\n");
	scanf_s("%d", &n);
	printf("�������һ�����飺\n");
	for (int i = m; i < m + n; i++)
		scanf_s("%d", &a[i]);
	/*for (int j = 0; j < m + n; j++)
		printf("%d ", a[j]);*/
	reverse(a, m + n);
	reverse(a, n);
	reverse(a + n, m);
	for (int j = 0; j < m + n; j++)
		printf("%d ", a[j]);
	return 0;
}