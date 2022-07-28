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
	for (int i = 1; i <= 99999; i++)
	{
		if (isSquare(i+100)&&isSquare(i+168)) {
				printf("%d\n", i);
		}
	}
}