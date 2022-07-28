#include<stdio.h>
#include<math.h>
int main()
{
	printf("请输入两个数:");
	int m, n,t;
	scanf_s("%d %d", &m, &n);
	t = m;
	while (n!=0)
	{
		m = n;
		n = t % n;
		t = m;
	}
	printf("公约数为:%d\n", m);
	if (m != 1)
		printf("两个整数不互质！");
	else
		printf("两个整数互质！");
}