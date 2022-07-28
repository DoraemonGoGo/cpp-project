#include<stdio.h>
#include<math.h>
int yueshuSum(int n)
{
	int sum = 0;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			sum = i + (n / i);
	}
	return sum;
}
int main()
{
	printf("%d %d %d", yueshuSum(1), yueshuSum(2), yueshuSum(4));
	return 0;
}