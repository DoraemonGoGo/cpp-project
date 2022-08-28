#include<stdio.h>
int main()
{
	FILE* fp = fopen("E:\\桌面\\test.txt", "r");
	if (fp == NULL)
		printf("打开文件失败！");
	char ch = fgetc(fp);
	printf("%c\n", ch);
	fclose(fp);
	return 0;
}