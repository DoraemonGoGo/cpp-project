#include<stdio.h>
int main()
{
	int i, j, result;
	printf("\n");
	for (i = 1; i < 15; i++)
	{
		for (j = 1; j <= i; j++)
		{
			result = i * j;
			printf("%d*%d=%-4d", i, j, result);
		}
		printf("\n");
	}
	return 0;
}