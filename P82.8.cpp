#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	printf("请输入一个正整数：\n");
	gets_s(a);
	char t;
	for (int i = 0; i < strlen(a) - 1; i++)
	{
		for (int j = 0; j < strlen(a) - 1 - i; j++)
		{
			if (a[j] - '0' < a[j + 1] - '0')
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	printf("%s", a);
	return 0;
}