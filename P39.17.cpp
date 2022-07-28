#include<stdio.h>
#include<math.h>
int yueshuSum(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	return sum;
}
int main()
{
	int a, b;
	printf("请输入两个数：");
	scanf_s("%d%d", &a, &b);
	printf("两数的约数和分别为：%d %d\n", yueshuSum(a), yueshuSum(b));
	if (yueshuSum(a) == yueshuSum(b))
		printf("They are friends!!!");
	else
		printf("They aren't friends!!!");
	return 0;
}