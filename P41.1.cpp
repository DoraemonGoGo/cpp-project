#include<stdio.h>
bool isDaffodilNum(int n)
{
	int a = n / 100;
	int b = (int(n / 10)) % 10;
	int c = n % 10;
	if (a*a*a + b*b*b + c*c*c == n)
		return true;
	else
		return false;
}
int main()
{
	for (int j = 100; j <= 999; j++)
	{
		if (isDaffodilNum(j))
			printf("%d ", j);
	}
	return 0;
}