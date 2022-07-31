#include<stdio.h>
int a[200];
void insert(int k)//插入数据
{
	int i;
	for (i = 0; i < 200; i++)//如果集合中已经有这个元素，直接返回
		if (a[i] == k)
			return;
	for (i = 199; i >= 0; i--)
	{
		if (a[i] == 0)//如果a[i]等于0，结束本次循环
			continue;
		if (k < a[i])
			a[i + 1] = a[i];//数组元素后移
		else
		{
			a[i + 1] = k;//插入
			return;
		}
	}
}
int main()
{
	int count = 0, n, y, z;
	a[0] = 1;
	for (int i = 0; i < 200; i++)
	{
		n = a[i];
		printf("%d\t", a[i]);
		count++;//统计个数
		y = 2 * n + 1;
		z = 3 * n + 1;
		insert(y);
		insert(z);
		if (count == 100)//如果达到100，停止循环
			break;
	}
	return 0;
}