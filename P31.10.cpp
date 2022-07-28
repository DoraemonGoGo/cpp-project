#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
	for (int j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int count = 0, n = 1;
	while (count<20)
	{
		if (isPrime(n) && isPrime(n + 2))
		{
			printf("(%d,%d) ", n, n + 2);
			count++;
			if (count%5==0)
				printf("\n");
		}
		n+=2;
	}
}