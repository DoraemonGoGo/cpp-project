#include<stdio.h>
#include<math.h>
int main()
{
	printf("����������:");
	int num;
	scanf_s("%d", &num);
	int i=0;
	while (i*i*i<num)
	{
		i++;
	}
	printf("%d", i - 1);
}