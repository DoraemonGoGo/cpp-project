#include<stdio.h>
#include<string.h>
#define N 10
int transForm(char* array)
{
	int sum = 0;
	for (int i = 0; i < strlen(array);i++)
	{
		if (array[i] >= '0' && array[i] <= '9')
			sum = sum * 16 + array[i] - '0';
		else if (array[i] >= 'A' && array[i] <= 'F')
			sum = sum * 16 + array[i] - 'A' + 10;
		else
			break;
	}
	return sum;
}
int main()
{
	char a[N];
	printf("请输入一个十六进制数：");
	gets_s(a);
	printf("%d\n", transForm(a));
	return 0;
}