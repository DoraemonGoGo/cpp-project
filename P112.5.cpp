#include<stdio.h>
#include<string.h>
int main()
{
	int letters = 0, spaces = 0, digits = 0, others = 0;
	char s[100];
	printf("�������ַ���:\n");
	gets_s(s);//scanf�޷�����ո�  gets�Իس�������ȡ
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
	printf("Ӣ����ĸ���ո����ֺ������ַ��ĸ����ֱ�Ϊ��\n");
	printf("%d %d %d %d", letters, spaces, digits, others);
	return 0;
}