#include<stdio.h>
/*int length(char a[])
{
	int count = 0;
	for (int i = 0; a[i] != '\0'; i++)
		count++;
	return count;
}��ָ�뷽��*/
int length(char* s)
{
	int i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return i;
}/*ʹ��ָ��*/
int main()
{
	char a[20];
	printf("�������ַ�����\n");
	gets_s(a);
	printf("����Ϊ:\n");
	printf("%d\n", length(a));
	return 0;
}