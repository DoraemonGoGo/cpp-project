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
	int count = 0;
	for (int i = 100; i <= 200; i++)
	{
		if (isPrime(i))
		{
			count++;
			printf("%d ", i);
			if (count%5 == 0)
				printf("\n");
		}
	}	
	return 0;
}