#include<stdio.h>
int main()
{
	int n;
	double sum = 0.0;
	printf("������������\n");
	scanf_s("%d", &n);
	double a[100];
	a[0] = 1.0, a[1] = 2.0;
	for (int i = 2; i < 100; i++)
		a[i] = a[i - 2] + a[i - 1];
	int j = 0;
	while (j < n)
	{
		sum += a[j + 1] / a[j];
		j++;
	}
	printf("ǰ%d���Ϊ��%llf", n, sum);
	return 0;
}