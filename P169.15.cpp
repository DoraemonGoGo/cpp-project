#include<stdio.h>
int a[100];
int fun(int a[], int l, int r, int k)
{
	if (l <= r)
	{
		if (k == a[(l + r) / 2])
			return (l + r) / 2;
		else if (k > a[(l + r) / 2])
			return fun(a, (l + r) / 2 + 1, r, k);
		else
			return fun(a, l, (l + r) / 2 - 1, k);
	}
	else
		return -1;
}
int main()
{
	int n, k, l, r;
	printf("请输入数组的长度：\n");
	scanf_s("%d", &n);
	printf("请输入数组：\n");
	for (int i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	printf("请输入要查找的元素：\n");
	scanf_s("%d", &k);
	printf("请输入搜索范围：\n");
	scanf_s("%d%d", &l, &r);
	if (fun(a, l - 1, r - 1, k) == -1)
		printf("未查找到该元素！");
	else
		printf("该元素是数组的第%d个元素", fun(a, l, r, k) + 1);
	return 0;
}
