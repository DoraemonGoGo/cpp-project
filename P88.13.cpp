#include<stdio.h>
int main()
{
	char a[100];
	printf("请输入字符串：\n");
	gets_s(a);
	int i = 0;
	while (a[i] != '\0')
	{
		while (a[i] == 'Y' || a[i] == 'N')
			i++;
		if (a[i] == '2')
			i++;
		else
			break;
		while (a[i] == 'y' || a[i] == 'n')
			i++;
		if (a[i] == '1')
			i++;
		else
			break;
	}
	if (a[i - 1] == '1' || a[i - 1] == '2')
	{
		if (a[i] == '\0')
			printf("该字符串是两个机器人的对话！\n");
		else
			printf("该字符串不是两个机器人的对话！\n");
	}
	else
		printf("该字符串不是两个机器人的对话！\n");
	return 0;
}