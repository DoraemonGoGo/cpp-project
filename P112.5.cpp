#include<stdio.h>
#include<string.h>
int main()
{
	int letters = 0, spaces = 0, digits = 0, others = 0;
	char s[100];
	printf("请输入字符串:\n");
	gets_s(s);//scanf无法读入空格  gets以回车结束读取
	for (int i = 0; i < strlen(s); i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
			letters++;
		else if (s[i] == ' ')
			spaces++;
		else if (s[i] >= '0' && s[i] <= '9')
			digits++;
		else
			others++;
	}
	printf("英文字母、空格、数字和其他字符的个数分别为：\n");
	printf("%d %d %d %d", letters, spaces, digits, others);
	return 0;
}