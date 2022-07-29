#include<stdio.h>
int B[15];
int* fnum(int* A, int m, int* s)
{
	int k;
	for (k = 0; k < 15; k++)
		A[k] = 0;
	k = 0;
	*s = 0;
	while (m!=0)
	{
		A[k] = m % 10;
		k++;
		m /= 10;
		(*s)++;
	}
	return A;
}
int main()
{
	int k=15, m;
	printf("请输入一个数：");
	scanf_s("%d", &m);
	int* c;
	c=fnum(B, m, &k);
	/*for (k = 0; k < 15; k++)
		A[k] = 0;
	k = 0;
	while (m != 0)
	{
		A[k] = m % 10;
		k++;
		m /= 10;
	}*/
	for (int i = 0; i < k; i++)
	{
		printf("%d ", c[i]);
	}
	printf("%d", k);
	return 0;
}