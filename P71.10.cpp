#include<stdio.h>
int main()
{
	int n, a[100], m, i = 0;
	printf("������Ҫת����ʮ��������\n");
	scanf_s("%d", &n);
	while (n != 0)
	{
		m = n % 8;
		n /= 8;
		a[i] = m;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
		printf("%d", a[j]);
	return 0;
}