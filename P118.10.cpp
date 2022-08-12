#include<stdio.h>
#include<string.h>
#include<malloc.h>
int* fun(char s[])
{
	int len = strlen(s);
	int* b = (int*)malloc(sizeof(int) * len);
	for (int i = 0; i < len; i++)
		b[i] = 0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			b[s[i] - 'a']++;
		}
	}
	return b;
}
int main()
{
	char s[100];
	printf("请输入字符串s:\n");
	scanf_s("%s", s, 100);
	int len = strlen(s);
	int* c = fun(s);
	for (int i = 0; i < len; i++)
	{
		if (c[i] != 0)
			printf("字符%c在字符串s中出现的次数:%d\n", 'a' + i, c[i]);
	}

	return 0;
}