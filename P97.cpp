#include<stdio.h>
bool isExist(int a[], int n)
{
	int i, sum = 0, flag = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] == sum && i > 0)
		{
			printf("%d ", i);
			flag = 1;
		}
		sum += a[i];
	}
	if (flag == 1)
		return 1;
	else
		return 0;
}
int main()
{
	int n, A[100];
	printf("请输入数组长度:\n");
	scanf_s("%d", &n);
	printf("请输入数组：\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &A[i]);
	bool a = isExist(A, n);
	printf("\n");
	if (a)
		printf("Exist!");
	else
		printf("Not exist!");
	return 0;
}