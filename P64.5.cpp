#include<stdio.h>
#include<string.h>
#define N 15
void addOne(char* array)
{
	int i = strlen(array) - 1;
	array[i] = array[i] - '0' + 1 + '0';
	while (array[i]=='2'&&i>0)
	{
		array[i] = '0';
		array[i - 1] = array[i - 1] - '0' + 1 + '0';
		i--;
	}
	if (i == 0&&array[i]=='2')
	{
		array[i] = '0';
		printf("1");
	}
	for (int j = 0; j < strlen(array); j++)
		printf("%c", array[j]);
}
int main()
{
	char a[N];
	printf("请输入一个二进制数：");
	gets_s(a);
	addOne(a);
	return 0;
}