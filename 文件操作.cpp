#include<stdio.h>
int main()
{
	FILE* fp = fopen("E:\\����\\test.txt", "r");
	if (fp == NULL)
		printf("���ļ�ʧ�ܣ�");
	char ch = fgetc(fp);
	printf("%c\n", ch);
	fclose(fp);
	return 0;
}