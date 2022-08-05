#include<stdio.h>
/*int length(char a[])
{
	int count = 0;
	for (int i = 0; a[i] != '\0'; i++)
		count++;
	return count;
}非指针方法*/
int length(char* s)
{
	int i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return i;
}/*使用指针*/
int main()
{
	char a[20];
	printf("请输入字符串：\n");
	gets_s(a);
	printf("长度为:\n");
	printf("%d\n", length(a));
	return 0;
}