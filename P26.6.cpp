#include<stdio.h>
#include<math.h>
int isSquare(int n)
{
	int i = sqrt(n);
	if (n == 1 || n == 0)
		return 1;
	if (i * i == n)
		return 1;
	else return 0;
}
int main()
{
	for (int i = 100; i <= 999; i++)
	{
		if (isSquare(i)) {
			int x = i / 100;
			int y = (i % 100) / 10;
			int z = i % 10;
			if (x == y || x == z || y == z)
				printf("%d\n", i);
		}
	}
}