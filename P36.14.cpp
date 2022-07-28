#include<stdio.h>
#include<math.h>
int main()
{
	int x, y, z, t;
	printf("请输入三个数:");
	scanf_s("%d%d%d", &x, &y, &z);
	if (x > y)
	{
		t = x;
		x = y;
		y = t;
	}
	if (x > z)
	{
		t = x;
		x = z;
		z = t;
	}
	if (y > z)
	{
		t = y;
		y = z;
		z = t;
	}
	printf("从小到大为:%d %d %d", x, y, z);
}